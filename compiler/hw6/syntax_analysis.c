//A4
#include "syntax_analysis.h"

extern char *yytext;
A_TYPE *int_type, *char_type, *void_type, *float_type, *string_type;
A_NODE *root;
A_ID *current_id = NIL;
int syntax_err = 0;
int line_no = 1;
int current_level = 0;

A_NODE *makeNode(NODE_NAME name, A_NODE *left_child, A_NODE *center_child, A_NODE *right_child) {
	A_NODE *new_node = (A_NODE *)malloc(sizeof(A_NODE));

	new_node->name = name;
	new_node->llink = left_child;
	new_node->clink = center_child;
	new_node->rlink = right_child;

	new_node->type = NIL;
	new_node->line = line_no;
	new_node->value = 0;


	return new_node;
}

A_NODE *makeNodeList(NODE_NAME name, A_NODE *a, A_NODE *b) {
	A_NODE *m, *k;
	k = a;
	while (k->rlink)
		k = k->rlink;
	m = (A_NODE *)malloc(sizeof(A_NODE));
	m->name = k->name;
	m->llink = NIL;
	m->clink = NIL;
	m->rlink = NIL;
	m->type = NIL;
	m->line = line_no;
	m->value = 0;
	k->name = name;
	k->llink = b;
	k->rlink = m;

	return a;
}

A_ID *makeIdentifier(char *s) {
	A_ID *new_id = (A_ID *) malloc(sizeof(A_ID));

	new_id->name = s;
	new_id->kind = 0;
	new_id->link = NIL;
	new_id->specifier = 0;
	new_id->level = current_level;
	new_id->address = 0;
	new_id->value = 0;
	new_id->init = NIL;
	new_id->line = line_no;
	new_id->prev = current_id;
	new_id->type = NIL;

	current_id = new_id;

	return new_id;
}

A_ID *makeDummyIdentifier() {
	A_ID *dummy_id = (A_ID *) malloc(sizeof(A_ID));

	dummy_id->name = "";
	dummy_id->kind = 0;
	dummy_id->link = NIL;
	dummy_id->specifier = 0;
	dummy_id->level = current_level;
	dummy_id->address = 0;
	dummy_id->value = 0;
	dummy_id->init = NIL;
	dummy_id->line = line_no;
	dummy_id->prev = 0;
	dummy_id->type = NIL;

	return dummy_id;
}

A_TYPE *makeType(T_KIND kind) {
	A_TYPE *new_type = (A_TYPE *) malloc(sizeof(A_TYPE));

	new_type->kind = kind;
	new_type->size = 0;
	new_type->local_var_size = 0;
	new_type->element_type = NIL;
	new_type->field = NIL;
	new_type->expr = NIL;
	new_type->line = line_no;
	new_type->check = FALSE;
	new_type->prt = FALSE;

	return new_type;
}

A_SPECIFIER *makeSpecifier(A_TYPE * type, S_KIND stor) {
	A_SPECIFIER *new_specifier = (A_SPECIFIER *)malloc(sizeof(A_SPECIFIER));

	new_specifier->type = type;
	new_specifier->stor = stor;
	new_specifier->line = line_no;

	return new_specifier;
}

A_ID *searchIdentifier(char *s, A_ID *id) {
	while(id) {
		if (!strcmp(s, id->name)) {
			break;
		}

		id = id->prev;
	}
	
	return id;
}

A_ID *searchIdentifierAtCurrentLevel(char *s, A_ID *id) {
	while(id) {
		if (id->level < current_level) {
			id = NIL;
			break;
		}

		if (!strcmp(s, id->name)) {
			break;
		}

		id = id->prev;
	}
	
	return id;

}

A_SPECIFIER *updateSpecifier(A_SPECIFIER *specifier, A_TYPE *type, S_KIND stor) {
	if (type) {
		if (specifier->type) {
			syntax_error(24);
		}
		specifier->type = type;

	} else if (stor) {
		if (specifier->stor) {
			syntax_error(24);
		}
		specifier->stor = stor;
	}

	return specifier;
}

void checkForwardReference() {
	A_ID *id;
	A_TYPE *type;

	id = current_id;
	while (id) {
		if (id->level < current_level) {
			break;
		}

		type = id->type;
		if (id->kind == ID_NULL) {
			syntax_error(31, id->name);
		} else if ((id->kind == ID_STRUCT || id->kind == ID_ENUM) && type->field == NIL) {
			syntax_error(32, id->name);
		}

		id = id->prev;
	}

	return;
}

void setDefaultSpecifier(A_SPECIFIER *specifier) {
	if (specifier->type == NIL) {
		specifier->type = int_type;
	}

	if (specifier->stor == S_NULL) {
		specifier->stor = S_AUTO;
	}

	return;
}

A_ID *linkDeclaratorList(A_ID *id1, A_ID *id2) {
	A_ID *cur_link;
	if (!id1) return id2;

	cur_link = id1;
	while (cur_link->link) {
		cur_link = cur_link->link;
	}

	cur_link->link = id2;

	return id1;
}

A_ID *getIdentifierDeclared(char *s) {
	A_ID *id = searchIdentifier(s, current_id);

	if (!id) syntax_error(13, s);

	return id;
}

A_TYPE *getTypeOfStructOrEnumRefIdentifier(T_KIND kind, char *s, ID_KIND kind_of_id) {
	A_ID *id;
	A_TYPE *type;

	id = searchIdentifier(s, current_id);
	if (id) {
		if(id->kind == kind_of_id && id->type->kind == kind) {
			return(id->type);
		} else {
			syntax_error(11, s);
		}
	}

	type = makeType(kind);
	id = makeIdentifier(s);
	id->kind = kind_of_id;
	id->type = type;

	return(type);
}

A_ID *setDeclaratorInit(A_ID *id, A_NODE *node) {
	id->init = node;

	return id;
}

A_ID *setDeclaratorKind(A_ID *id, ID_KIND kind) {
	A_ID *a = searchIdentifierAtCurrentLevel(id->name, id->prev);
	if (a) {
		syntax_error(12, id->name);
	}
	id->kind = kind;

	return id;
}

A_ID *setDeclaratorType(A_ID *id, A_TYPE *type) {
	id->type = type;

	return id;
}

A_ID *setDeclaratorElementType(A_ID *id, A_TYPE *type) {
	A_TYPE *tt;
	if (!(id->type)) {
		id->type = type;
	} else {
		tt = id->type;
		while(tt->element_type) {
			tt = tt->element_type;
		}
		tt->element_type = type;
	}
	
	return id;
}

A_ID *setDeclaratorTypeAndKind(A_ID *id, A_TYPE *type, ID_KIND kind) {
	id = setDeclaratorElementType(id, type);
	id = setDeclaratorKind(id, kind);

	return id;
}

A_ID *setDeclaratorListSpecifier(A_ID *id, A_SPECIFIER *specifier) {
	A_ID *a;
	setDefaultSpecifier(specifier);

	a = id;
	while (a) {
		if (strlen(a->name) && searchIdentifierAtCurrentLevel(a->name, a->prev)) {
			syntax_error(12, a->name);
		}
		a = setDeclaratorElementType(a, specifier->type);

		if (specifier->stor == S_TYPEDEF) {
			a->kind = ID_TYPE;
		} else if (specifier->type->kind == T_FUNC) {
			a->kind = ID_FUNC;
		} else {
			a->kind = ID_VAR;
		}

		a->specifier = specifier->stor;
		if (a->specifier == S_NULL) {
			a->specifier = S_AUTO;
		}
		
		a = a->link;
	}

	return id;
}

A_ID *setFunctionDeclaratorSpecifier(A_ID *id, A_SPECIFIER *specifier) {
	A_ID *a;
	if (specifier->stor) {
		syntax_error(25);
	}
	setDefaultSpecifier(specifier);

	if (!id->type) { //코드 추가 
		syntax_error(24);
	}

	if (id->type->kind != T_FUNC) {
		syntax_error(21);
		return id;
	} else {
		id = setDeclaratorElementType(id, specifier->type);
		id->kind = ID_FUNC;
	}

	a = searchIdentifierAtCurrentLevel(id->name, id->prev);
	if (a) {
		if (a->type->kind != T_FUNC || a->type->expr) { //코드추가
			syntax_error(12, id->name);
		} else {
			if (isNotSameFormalParameters(a->type->field, id->type->field)) {
				syntax_error(22, id->name);
			}
			if (isNotSameType(a->type->element_type, id->type->element_type)) {
				syntax_error(26, a->name);

			}
		}
	}

	a = id->type->field;
	while(a) {
		if (strlen(a->name)) {
			current_id = a;
		} else if (a->type) {
			syntax_error(23);
		}
		a = a->link;
	}

	return id;
}

A_ID *setFunctionDeclaratorBody(A_ID *id, A_NODE *expr_node) {
	id->type->expr = expr_node;

	return id;
}

A_ID *setParameterDeclaratorSpecifier(A_ID *id, A_SPECIFIER *specifier) {
	if (searchIdentifierAtCurrentLevel(id->name, id->prev)) {
		syntax_error(12, id->name);
	}

	if (specifier->stor) {
		syntax_error(14);
	}

	if (specifier->type == void_type) {
		if (!id->type) {
			syntax_error(14);
			
		} else if (id->type->kind != T_POINTER) {
			syntax_error(14);
			
		} else {
			;
		}
	}

	setDefaultSpecifier(specifier);
	
	id = setDeclaratorElementType(id,specifier->type);
	id->kind = ID_PARM;

	return id;
}

A_ID *setStructDeclaratorListSpecifier(A_ID *id, A_TYPE *type) {
	A_ID *a;
	a = id;
	while (a) {
		if (searchIdentifierAtCurrentLevel(a->name, a->prev)) {
			syntax_error(12, a->name);
		}
		a = setDeclaratorElementType(a, type);
		a->kind = ID_FIELD;
		a = a->link;
	}

	return id;
}

A_TYPE *setTypeNameSpecifier(A_TYPE *type, A_SPECIFIER *specifier) {
	if (specifier->stor) {
		syntax_error(20);
	}
	setDefaultSpecifier(specifier);
	type = setTypeElementType(type, specifier->type);

	return type;
}

A_TYPE *setTypeElementType(A_TYPE *type, A_TYPE *element_type) {
	A_TYPE *t;
	if (type == NIL) {
		return element_type;
	}

	t = type;
	while (t->element_type) {
		t = t->element_type;
	}

	t->element_type = element_type;

	return type;
}

A_TYPE *setTypeField(A_TYPE *type, A_ID *id) {
	type->field = id;

	return type;
}

A_TYPE *setTypeExpr(A_TYPE *type, A_NODE *expr_node) {
	type->expr = expr_node;

	return type;
}

A_TYPE *setTypeAndKindOfDeclarator(A_TYPE *type, ID_KIND kind, A_ID *id) {
	if (searchIdentifierAtCurrentLevel(id->name, id->prev)) {
		syntax_error(12, id->name);
	}
	id->type = type;
	id->kind = kind;

	return type;
}

A_TYPE *setTypeStructOrEnumIdentifier(T_KIND k, char *s, ID_KIND kk) {
	A_TYPE *t;
	A_ID *id, *a;

	a = searchIdentifierAtCurrentLevel(s, current_id);
	if (a) {
		if (a->kind == kk && a->type->kind == k) {
			if (a->type->field) {
				syntax_error(12, s);
			} else {
				return a->type;
			}
		} else {
			syntax_error(12, s);
		}
	}

	id = makeIdentifier(s);
	t = makeType(k);
	id->type = t;
	id->kind = kk;

	return t;
}

BOOLEAN isNotSameFormalParameters(A_ID *a, A_ID *b) {
	if (a == NIL)
		return FALSE;

	while(a) {
		if (b == NIL || isNotSameType(a->type, b->type)) {
			return TRUE;
		}

		a = a->link;
		b = b->link;
	}

	if (b) { // b가 아직 남아있다면
		return TRUE;
	} else {
		return FALSE;
	}
}

BOOLEAN isNotSameType(A_TYPE *t1, A_TYPE *t2) {
	if (isPointerOrArrayType(t1) || isPointerOrArrayType(t2)) {
		return isNotSameType(t1->element_type, t2->element_type);
	} else {
		return t1 != t2;
	}
}

BOOLEAN isPointerOrArrayType(A_TYPE *type) {
	if (type->kind == T_ARRAY || type->kind == T_POINTER) {
		return TRUE;
	} else {
		return FALSE;
	}
}

void initialize() {
	// primitive data types
	int_type=setTypeAndKindOfDeclarator(
	makeType(T_ENUM),ID_TYPE,makeIdentifier("int"));
	float_type=setTypeAndKindOfDeclarator(
	makeType(T_ENUM),ID_TYPE,makeIdentifier("float"));
	char_type= setTypeAndKindOfDeclarator(
	makeType(T_ENUM),ID_TYPE,makeIdentifier("char"));
	void_type=setTypeAndKindOfDeclarator(
	makeType(T_VOID),ID_TYPE,makeIdentifier("void"));
	string_type=setTypeElementType(makeType(T_POINTER),char_type);
	int_type->size=4; int_type->check=TRUE;
	float_type->size=4; float_type->check=TRUE;
	char_type->size=1; char_type->check=TRUE;
	void_type->size=0; void_type->check=TRUE;
	string_type->size=4; string_type->check=TRUE;
	// printf(char *, ...) library function
	setDeclaratorTypeAndKind(
	makeIdentifier("printf"),
	setTypeField(
	setTypeElementType(makeType(T_FUNC),void_type),
	linkDeclaratorList(
	setDeclaratorTypeAndKind(makeDummyIdentifier(),string_type,ID_PARM),
	setDeclaratorKind(makeDummyIdentifier(),ID_PARM))),
	ID_FUNC);
	// scanf(char *, ...) library function
	setDeclaratorTypeAndKind(
	makeIdentifier("scanf"),
	setTypeField(
	setTypeElementType(makeType(T_FUNC),void_type),
	linkDeclaratorList(
	setDeclaratorTypeAndKind(makeDummyIdentifier(),string_type,ID_PARM),
	setDeclaratorKind(makeDummyIdentifier(),ID_PARM))),
	ID_FUNC);
	// malloc(int) library function
	setDeclaratorTypeAndKind(
	makeIdentifier("malloc"),
	setTypeField(
	setTypeElementType(makeType(T_FUNC),string_type),
	setDeclaratorTypeAndKind(makeDummyIdentifier(),int_type,ID_PARM)),
	ID_FUNC);
}

void syntax_error(int i,char *s) {
	syntax_err++;
	printf("line %d: syntax error: ", line_no);
	switch (i) {
		case 11: printf("illegal referencing struct or union identifier %s",s);
		break;
		case 12: printf("redeclaration of identifier %s",s); break;
		case 13: printf("undefined identifier %s",s); break;
		case 14: printf("illegal type specifier in formal parameter"); break;
		case 20: printf("illegal storage class in type specifiers"); break;
		case 21: printf("illegal function declarator"); break;
		case 22: printf("conflicting parm type in prototype function %s",s);
		break;
		case 23: printf("empty parameter name"); break;
		case 24: printf("illegal declaration specifiers"); break;
		case 25: printf("illegal function specifiers"); break;
		case 26: printf("illegal or conflicting return type in function %s",s);
		break;
		case 31: printf("undefined type for identifier %s",s); break;
		case 32: printf("incomplete forward reference for identifier %s",s);
		break;
		default: printf("unknown"); break;
	}
	if (strlen(yytext)==0)
		printf(" at end\n");
	else
		printf(" near %s\n", yytext);

	exit(0);
}


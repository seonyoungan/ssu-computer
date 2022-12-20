a.out : y.tab.o lex.yy.o print.o syntax_analysis.o semantic_analysis.o print_sem.o generation.o
	gcc -o a.out y.tab.o lex.yy.o syntax_analysis.o print.o semantic_analysis.o print_sem.o generation.c

syntax_analysis.o : syntax_analysis.c
	gcc -g -c syntax_analysis.c

y.tab.o : y.tab.c
	gcc -g -c y.tab.c

lex.yy.o : lex.yy.c
	gcc -g -c lex.yy.c

print.o : print.c
	gcc -g -c print.c
	
generation.o : generation.c
	gcc -g -c generation.c
	
semantic_analysis.o : semantic_analysis.c
	gcc -g -c semantic_analysis.c
	
print_sem.o : print_sem.c
	gcc -g -c print_sem.c

lex.yy.c : type.h kim.l kim.y y.tab.h 
	lex kim.l

y.tab.c : kim.y type.h y.tab.h
	yacc -d kim.y

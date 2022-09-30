#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#define MAX 300

//token type
enum {
	NUMBER = 0, PLUS = 1, STAR = 2, LPAREN = 3, RPAREN = 4, END = 5, INIT = 6
} token;


//data type intNum = int, floatNum = float
typedef struct data {
	enum {
		intNum = 0,
		floatNum = 1
	} type;
	union typeBox {
		int i;
		float f;
	} value;
}data;

//전역변수 선언
data num;
char input[MAX];
int current = 0;

//함수의 원형
void get_token();
data expression();
data term();
data factor();
int error(int i);

//메인함수
void main() {
	data result;
	fgets(input, MAX, stdin);
	get_token();
	result = expression();
	if (token != END) {
		error(3);
	}
	else {
		if (result.type == intNum) {
			printf("%d\n", result.value.i);
		}
		else {
			printf("%f\n", result.value.f);
		}
	}
}

data expression() {
	data result;
	result = term();
	while (token == PLUS) {
		get_token();
		data rest = term();
		if (rest.type == intNum && result.type == floatNum) {
			result.value.f = result.value.f + (float)rest.value.i;
		}
		else if (rest.type == floatNum && result.type == intNum) {
			result.type = floatNum;
			int temp = result.value.i;
			result.value.f = rest.value.f + (float)temp;
		}
		else if (rest.type == floatNum && result.type == floatNum) {
			result.value.f = result.value.f + rest.value.f;
		}
		else if (rest.type == intNum && result.type == intNum) {
			result.value.i = result.value.i + rest.value.i;
		}
	}
	return result;
}

data term() {
	data result;
	result = factor();
	while (token == STAR) {
		get_token();
		data rest = factor();
		if (rest.type == intNum && result.type == floatNum) {
			result.value.f = result.value.f + (float)rest.value.i;
		}
		else if (rest.type == floatNum && result.type == intNum) {
			result.type = floatNum;
			int temp = result.value.i;
			result.value.f = rest.value.f + (float)temp;
		}
		else if (rest.type == floatNum && result.type == floatNum) {
			result.value.f = result.value.f + rest.value.f;
		}
		else if (rest.type == intNum && result.type == intNum) {
			result.value.i = result.value.i + rest.value.i;
		}
	}
	return result;
}

data factor() {
	data result;
	if (token == NUMBER) {
		if (num.type == intNum) {
			result.type = intNum;
			result.value.i = num.value.i;
		}
		else {
			result.type = floatNum;
			result.value.f = num.value.f;
		}
		get_token();
	}

	else if (token == LPAREN) {
		get_token();
		result = expression();
		if (token == RPAREN) {
			get_token();
		}
		else {
			error(2);
		}
	}
	else {
		error(1);
	}
	return result;
}

//get_token()
void get_token() {
	int point = 0;
	char array[30];
	int count = 0;

	//nexttoken ->tokrn
	enum {
		NUMBER = 0, PLUS = 1, STAR = 2, LPAREN = 3, RPAREN = 4, END = 5, INIT = 6
	} nextToken;
	nextToken = INIT;
	//number value -> num
	for (int i = current; i < strlen(input) + 1; i++) {
		//다음토큰이 숫자이고 input[i]에 들어온 문자가 숫자이고 .이 아니면
		if (nextToken == NUMBER && (isdigit(input[i]) == 0 && input[i] != '.')) {
			current = i; 

			if (point == 1) { //실수
				num.type = floatNum;
				num.value.f = atof(array);
			} 
			else { //정수
				num.type = intNum;
				num.value.i = atoi(array);
			}
			break;
		}
		if (input[i] == '+') { //+를 입력했을 때
			nextToken = PLUS; //다음 토큰은 PLUS
			current = i + 1; // current 증가
			break;
		}
		else if (input[i] == '*') { //*를 입력했을 때
			nextToken = STAR;
			current = i + 1;
			break;
		}
		else if (input[i] == '(') { //(를 입력했을 때
			nextToken = LPAREN;
			current = i + 1;
			break;
		}
		else if (input[i] == ')') {  //)를 입력했을 때
			nextToken = RPAREN;
			current = i + 1;
			break;
		}
		else if (input[i] == '.') {
			point = 1;
			array[count] = input[i];
			count++;
		}
		else if (isdigit(input[i]) != 0) {
			nextToken = NUMBER;
			array[count] = input[i];
			count++;
		}
		else if (input[i] == ' ') {
			continue;
		}
		else {
			nextToken = END;
			break;
		}

	}
	token = nextToken;
}


//에러문구 출력
int error(int i) {
	switch (i) {
	case 1:
		printf("error: number or '('\n");
		break;
	case 2:
		printf("error: ')'\n");
		break;
	case 3:
		printf("error: END\n");
		break;
	}
	exit(1);
}
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include<string.h>

#include<stdlib.h>

#define MAXSIZE 100
typedef struct {
	char data[MAXSIZE];
	int top;
}Sqstack;

void Init(Sqstack* S) {
	S->top = -1;
}

int isEmpty(Sqstack* S) {
	if (S->top == -1) {
		return 1;
	}
	return 0;
}

void push(Sqstack* S, char x) {
	if (S->top == MAXSIZE - 1) {
		printf("栈已满");
		return;
	}
	S->top += 1;
	S->data[S->top] = x;

}

void pop(Sqstack* S, char* x) {
	if (S->top == -1) {
		printf("栈为空");
		return;
	}
	*x = S->data[S->top];
	S->top -= 1;
}

int Check(char s[], int length) {
	Sqstack S;
	Init(&S);
	int mid, i;
	char c;
	mid = length/ 2;
	for (i = 0; i < mid; i++) {
		push(&S, s[i]);
	}
	if (length % 2 != 0) {
		i++;
	}
	while (s[i] != '\0') {
		pop(&S, &c);
		if (s[i] != c) {
			return 0;
		}
		i++;
	}
	return isEmpty(&S);
}
int main()
{
	char s[MAXSIZE];
	scanf("%s", s);
	int len;
	len = strlen(s);
	Check(s, len) ? printf("是回文") : printf("不是回文");
	return 0;
}
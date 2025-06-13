//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include<stdlib.h>
//#include<stdbool.h>
//#include<string.h>
//
//
//#define MAXSIZE 1000
//typedef struct {
//	char data[MAXSIZE];
//	int top;
//}Sqstack;
//void Init(Sqstack* S) {
//	S->top = -1;
//}
//bool Empty(Sqstack* S) {
//	if (S->top == -1) {
//		return true;
//	}
//	return false;
//}
//void push(Sqstack* S, char x) {
//	if (S->top == MAXSIZE - 1) {
//		printf("Õ»ÒÑÂú");
//		return;
//	}
//	S->top += 1;
//	S->data[S->top] = x;
//}
//void pop(Sqstack* S, char *x) {
//	if (S->top == -1) {
//		printf("Õ»Îª¿Õ");
//		return;
//	}
//	*x = S->data[S->top];
//	S->top -= 1;
//}
//bool Check(char str[], int length) {
//	Sqstack S;
//	Init(&S);
//	for (int i = 0; i < length; i++){
//		if (str[i] == '(' || str[i] == '[' || str[i] == '{') {
//			push(&S, str[i]);
//		}
//		else {
//			if (Empty(&S)) {
//				return false;
//			}
//			char Elethem;
//			pop(&S, &Elethem);
//			if (str[i] == ')' && Elethem != '(') {
//				return false;
//			}
//			if (str[i] == ']' && Elethem != '[') {
//				return false;
//			}
//			if (str[i] == '}' && Elethem != '{') {
//				return false;
//			}
//		}
//	}
//	return Empty(&S);
//	
//}
//int main()
//{
//	char str[MAXSIZE];
//	scanf("%s", str);
//	int len = strlen(str);
//	if (Check(str, len)) {
//		printf("Æ¥Åä³É¹¦");
//	}
//	else
//		printf("Ê§°Ü");
//	return 0;
//}
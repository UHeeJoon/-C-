#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
int main() {
	int a, sum = 0; scanf("%d", &a);
	char* A = (char*)malloc(sizeof(char) * a);
	for (int i = 0; i <= a; i++)
		scanf("%c", &A[i]);
	for (int i = 1; i <= a; i++)
		sum += A[i] - 48;
	printf("%d\n", sum);
}
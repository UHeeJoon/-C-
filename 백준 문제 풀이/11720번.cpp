// C++ 동적 배열
#include <iostream>
using namespace std;
int main() {
	int num = 0, sum = 0;
	cin >> num;		// 받은 문자 길이

	char* array = new char[num];	// 동적 배열 생성

	cin >> array;		// 각각의 자릿수를 배열에 생성
	
	for (int i = 0; i < num; i++)
		sum += array[i] - '0';		// 자릿수의 합 sum에 대입

	cout << sum;
}



/* C++ 동적 배열 없이
#include<iostream>
using namespace std;
int main() {
	int num = 0, sum = 0;	// 변수 num , sum 선언
	cin >> num;
	char num_array[101] = {0};	
	cin >> num_array;				// 공백 구분없이 문자를 받은것을 배열로 쪼개서 담음
	for (int i = 0; i < num; i++) 
		sum += num_array[i] - '0';	// 아스키 코드 값으로 변화해서 sum에 연산
	cout << sum;
}
*/

/* C언어
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
int main() {
	int a, sum = 0; 
	scanf("%d", &a);
	char* A = (char*)malloc(sizeof(char) * a);
	for (int i = 0; i <= a; i++)
		scanf("%c", &A[i]);
	for (int i = 1; i <= a; i++)
		sum += A[i] - '0';
	printf("%d\n", sum);
}
*/
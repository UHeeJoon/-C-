// C++ ���� �迭
#include <iostream>
using namespace std;
int main() {
	int num = 0, sum = 0;
	cin >> num;		// ���� ���� ����

	char* array = new char[num];	// ���� �迭 ����

	cin >> array;		// ������ �ڸ����� �迭�� ����
	
	for (int i = 0; i < num; i++)
		sum += array[i] - '0';		// �ڸ����� �� sum�� ����

	cout << sum;
}



/* C++ ���� �迭 ����
#include<iostream>
using namespace std;
int main() {
	int num = 0, sum = 0;	// ���� num , sum ����
	cin >> num;
	char num_array[101] = {0};	
	cin >> num_array;				// ���� ���о��� ���ڸ� �������� �迭�� �ɰ��� ����
	for (int i = 0; i < num; i++) 
		sum += num_array[i] - '0';	// �ƽ�Ű �ڵ� ������ ��ȭ�ؼ� sum�� ����
	cout << sum;
}
*/

/* C���
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
#include<iostream>
using namespace std;
int factorial(int num) {
	if (num == 0) return 1;
	// 0�̸� 1 ����
	int mul = num;
	// ���丮���� ���� ���� mul
	if (mul == 1) return mul;
	// 1�� �Ǹ� ����Լ� ����
	return mul * factorial(mul - 1);
	// 10 �Է½�
	// 10 * (9 * ((8 * (((7 * ((((6 * (((((5 * ((((((4 * (((((((3 * ((((((((2 * ((((((((((1
	// ( �ϳ��� �ݺ� Ƚ��
}
int main() {
	int num; cin >> num;
	cout << factorial(num);
}
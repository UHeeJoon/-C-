#include<iostream>
using namespace std;
int main() {
	int a, b = 1, count = 1; // �̵��� �� a/ ���� ���� b(������ 1�̴� 1�� �ʱ�ȭ)/ �̵� Ƚ���� �� count
	cin >> a;
	for (int i = 0;; i += 6) {	// ������ 1, ù�� �� ������ �ִ� �� 7, �ι�° 19, ����° 37 -> 6�� ����� �þ
		b += i;
		if (a - b <= 0) // ��� ° �濡 �ִ����� �˸� Ƚ���� �� �� ����
			break;
		count++;	// �̵� Ƚ�� == ������ ����
	}
	cout << count;
}
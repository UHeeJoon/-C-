#include<iostream>
using namespace std;
#define MAX 1000000000
int main() {
	long long X, Y, Z;
	// ��ü Ƚ�� X / �̱� Ƚ�� Y / �·� Z
	cin >> X >> Y;
	Z = Y * 100 / X;
	// �̱� Ȱ�� 10�� �ڸ� ǥ��
	if (Z >= 99) {
		// Ȯ���� �ȹٲ�� ���
		cout << -1; return 0;
	}
	long long low = 0, high = MAX;
	// 2�� Ž��
	while (low <= high) {
		long long temp = (low + high) / 2; 
		long long win = 100 * (Y + temp) / (X + temp);
		if (Z < win) { 
			high = temp - 1; 
		}
		else { 
			low = temp + 1;
		}
	}
	cout << low;
}
#include<iostream>
using namespace std;
int main() {
	long long N;
	int F;
	// �� ���� N / F
	cin >> N >> F;
	N = N - N % 100;
	// �����ڸ��� ���� �ڸ� 00���� ����
	for (int i = 0; i < 100; i++) {
		// 00���� 99���� 
		if (N % F == 0) {
			// �������� ����
			break;
		}
		N += 1;
		// N�� �� ����
	}
	F = N % 100;
	// �޸𸮸� ���̱� ���� F ����
	// F�� ����� ���� ���ڸ�
	if (F / 10 == 0)
		// 00 01 02 �� ���� ����ϱ� ���� 0 ���
		cout << 0 << F;
	else
		cout << F;
}
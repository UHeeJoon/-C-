#include<iostream>
using namespace std;
int prime[100001];
int main() {
	int M, N = 100000;
	prime[0] = 1;
	// ---- �����佺 �׳׽��� ü�� �Ҽ��� ����ִ� �迭 ����
	for (int i = 2; i <= sqrt(N); i++) {
		for (int j = i + i; j <= N; j += i) {
			if (prime[j - 1] == 0)
				prime[j - 1] = 1;
		}
	}
	// ---------------------------------------------
	cin >> M >> N;
	// �ڿ��� M, N
	int underPrime = 0;
	// ����������� ���� underPrime
	for (int i = M; i <= N; i++) {
		// M ���� N ����
		if (prime[i - 1] == 1) {
			// �Ҽ��� �ƴϸ�
			int j = 2, temp = i, count = prime[1];
			// ����� ����� j/ i�� temp�� ��Ƽ� ��� ����� �� i�� ������ �ʰ� ��
			// ����� ������ �� count-- count=0���� ���� ������ 
			// ���� if���� prime[count - 1]�� ���� �迭�� -1���� ���� ���� ���� == prime[1] = 0
			while (1) {
				// ����� ���� ���
				if (temp == 1) break;
				if (temp % j == 0) {
					temp /= j;
					count += 1;
				}
				else j++;
			}
			if (prime[count - 1] == 0)
				// ����� ������ �Ҽ��̸� underPrime ����
				underPrime += 1;
		}	
	}
	cout << underPrime;
}
#include<iostream>
#include<cmath>
using namespace std;
int prime[10000];
int main() {
	prime[0] = 1;
	int T, n;
	// �׽�Ʈ ���̽� T / ¦�� n

	for (int i = 2; i <= sqrt(10000); i++) {
		for (int j = i + i; j <= 10000; j += i) {
			if (prime[j - 1] != 1)
				// �ӵ��� �����̶� �÷��ֱ� ���� if��
				prime[j - 1] = 1;
		}
	}
	cin >> T;

	for (int i = 0; i < T - 1; i++) { // output

		if (prime[i] == 0)

			cout << i + 1 << " ";
	}
}
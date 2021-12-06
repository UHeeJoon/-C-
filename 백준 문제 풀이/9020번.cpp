#include<iostream>
#include<cmath>
using namespace std;
int prime[10000];
int main() {
	prime[0] = 1;
	int T, n;
	// 테스트 케이스 T / 짝수 n

	for (int i = 2; i <= sqrt(10000); i++) {
		for (int j = i + i; j <= 10000; j += i) {
			if (prime[j - 1] != 1)
				// 속도를 조금이라도 올려주기 위한 if문
				prime[j - 1] = 1;
		}
	}
	cin >> T;

	for (int i = 0; i < T - 1; i++) { // output

		if (prime[i] == 0)

			cout << i + 1 << " ";
	}
}
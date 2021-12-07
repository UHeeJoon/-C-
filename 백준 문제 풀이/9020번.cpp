#include<iostream>
#include<cmath>
using namespace std;

int prime[10000];
// 주어지는 짝수 범위 10000
int main() {
	prime[0] = 1;
	int T, n;
	// 테스트 케이스 T / 짝수 n
	int k, j;
	// 에라토스테네스의 체와 소수를 출력할 때 사용할 변수 k, j

	// -------에라토스 테네스의 체 활용---------
	for (k = 2; k <= sqrt(10000); k++) {
		for (j = k + k; j <= 10000; j += k) {
			if (prime[j - 1] != 1)
				// 속도를 조금이라도 올려주기 위한 if문
				prime[j - 1] = 1;
		}
	}
	// 소수가 아닌수를 1로 초기화
	// ----------------------------------------

	cin >> T; // 테스트 케이스 T
	for (int t = 0; t < T; t++) {
		cin >> n;	// 짝수 입력

		int min = 10000, k = 0, j = 0;
		// 결과 값으로 나오는 소수들 중 차이가 가장 작은 두 소수를 판별하기 위한 min 변수
		// k, j 초기화

		for (int i = n - 2; i >= n/2; i--) {	// 최소한의 범위 설정 
			// 소수의 최소값 2 -> i = n -2
			// ex) 10일 때 3 7/ 5 5/ 7 3 처럼 3과 7이 중복되는 것을 막고 5 5를 사용하기 위한 i >= n/2 범위 설정

			if (prime[i - 1] == 0 &&  prime[n - i - 1] == 0) {
				// 12 - a = b일 때 a가 소수이고 b도 소수인지 판별하기 위한 if문

				/* prime[n - i - 1] == 0을 판별하지 않으면
				12 - 3 = 9 처럼 빼는 수는 소수지만 결과값은 소수가 아닌 수 출력하게 됨*/

				if (2 * i - n < min) {
					// 두 소수의 차이가 min(초기값 10000)보다 작으면
					min = 2 * i - n;
					// 두 소수의 차이를 min에 대입
					k = n - i, j = i;
					// k는 n에서 뺀 소수 / j는 n에서 빼는 소수
				}
			}
		}
		cout << k << " " << j << endl;
		// 작은 소수부터 출력
	}
}

#include<iostream>
#include<cmath>

using namespace std;
#define MAX 123456 * 2
// 주어지는 범위 123456의 2배를 최대값 설정
int prime[MAX + 1];
// 오류 방지를 위한 1의 여분 값 제공
int main() {
	int n;
	// 자연수 n

	prime[0] = 1;
	// 배열 첫번 째 == 1에 1로 초기화

	// ------------------------------
	// 에라토스 테네스의 체를 활용해서 소수가 아닌 수에 1값 대입
	for (int i = 2; i <= sqrt(MAX); i++) {
		for (int j = i + i; j <= MAX; j += i) {
			if (prime[j - 1] != 1)
				// 속도를 조금이라도 올려주기 위한 if문
				prime[j - 1] = 1;
		}
	}
	// ----------------------------- 

	while (1) {	// output부분
		cin >> n;
		int pr = 0;	// 소수의 개수를 담을 pr

		if (n == 0) break;	// 0이면 종료 

		for (int i = n +1; i <= n * 2; i++) {	
			// n보다 크고, 2n보다 작거나 같은

			if (prime[i - 1] != 1) // 1이 아니면 즉 소수이면 pr증가
				pr++;
		}
		cout << pr << endl;
	}
}

/*
// 다른사람 풀이
#include <iostream>
#include <cmath> 
#include <cstdio>

using namespace std;

int main() {
	long long n, test, i, j;
	long long cnt = 0;

	while (1) {
		cnt = 0;
		cin >> n;

		//0이 입력될 때까지 반복
		if (n == 0) break;

		//1일 경우 1출력
		else if (n == 1) cout << "1" << "\n";

		else {
			for (int i = n + 1; i <= 2 * n; i++) {

				//짝수는 소수가 아니므로 한번 걸러주기
				if (i % 2 != 0) {

					//j+=2 주의하기
					//에라토스테네스의 소수 필요 충분조건사용
					for (int j = 3; j <= sqrt(i); j += 2) {

						// 2보다 크면서 자기 자신의 제곱근까지의 수에 나누어지지 않는 수가 소수
						if (i % j == 0) {
							cnt--;
							break;
						}
					}
					cnt++;
				}

			}
			cout << cnt << "\n";
		}

	}

}
*/

/*	시간 초과
// 틀린 코드
#include<iostream>
#include<cmath>
using namespace std;
int main() {
	int n;
	while (1) {
		int prime = 0;
		cin >> n;
		if (n == 0)
			break;
		else {
			for (int i = n + 1; i <= n + n; i++) {
				for (int j = 2; j <= sqrt(i); j++) {
					if (i % j == 0) {
						prime += 1;
						break;
					}
				}
			}
		}
		prime = n - prime;
		cout << prime << endl;
	}
}
*/
#include<iostream>
using namespace std;
int prime[100001];
int main() {
	int M, N = 100000;
	prime[0] = 1;
	// ---- 에라토스 테네스의 체로 소수를 담고있는 배열 생성
	for (int i = 2; i <= sqrt(N); i++) {
		for (int j = i + i; j <= N; j += i) {
			if (prime[j - 1] == 0)
				prime[j - 1] = 1;
		}
	}
	// ---------------------------------------------
	cin >> M >> N;
	// 자연수 M, N
	int underPrime = 0;
	// 언더프라임의 개수 underPrime
	for (int i = M; i <= N; i++) {
		// M 부터 N 까지
		if (prime[i - 1] == 1) {
			// 소수가 아니면
			int j = 2, temp = i, count = prime[1];
			// 약수를 계산할 j/ i를 temp에 담아서 약수 계산할 때 i값 변하지 않게 함
			// 약수의 개수를 셀 count-- count=0하지 않은 이유는 
			// 밑의 if문에 prime[count - 1]에 의해 배열에 -1값이 들어가는 것을 방지 == prime[1] = 0
			while (1) {
				// 약수의 개수 계산
				if (temp == 1) break;
				if (temp % j == 0) {
					temp /= j;
					count += 1;
				}
				else j++;
			}
			if (prime[count - 1] == 0)
				// 약수의 개수가 소수이면 underPrime 증가
				underPrime += 1;
		}	
	}
	cout << underPrime;
}
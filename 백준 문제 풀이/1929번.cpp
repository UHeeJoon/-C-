#include<iostream>
#include<cmath>
using namespace std;

int prime[1000000];
// 1000000 까지의 수를 판별할 prime배열 
int main() {
	int M, N;
	// 자연수 M, N
	cin >> M >> N;

	prime[0] = 1;
	// 1위치에 해당하는 배열 1로 초기화

	for (int i = 2; i <= sqrt(N); i++) {
		for (int j = i + i; j <= N; j += i) {
			// 에라토스테네스의 체 활용

			if (prime[j - 1] == 0)
				// 시간을 조금이라도 더 줄여주기 위해 조건문 추가

				prime[j - 1] = 1; // 소수가 아닌 수 1로 초기화
		}
	}
	for (int i = M; i <= N; i++) {
		if(prime[i - 1]==0)
			printf("%d\n", i);
	}
}

/*
#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

int main() {

	// int 하면 범위 너무 커졌다 bool로 하고 true, false 넣어줄 띵크!
	bool a[1000001];
	int N, K;
	cin >> N >> K;

	a[0] = false;
	a[1] = false;
	//계속 틀렸던 이유.  i를 N으로 했다. 만약 1부터면 1을 다시 true만들어준 셈
	for (int i = 2; i <= K; i++) {
		a[i] = true;
	}

	for (int i = 2; i <= sqrt(K); i++) {
		if (a[i]) {
			for (int j = i * i; j <= K; j += i) {
				a[j] = false;
			}

		}
	}
	for (int k = N; k <= K; k++) {
		if (a[k]) { // if가 참이면 
			printf("%d\n", k);
		}
	}
}
*/
/*
#include <iostream>
#include <cmath>

using namespace std;

int main() {
	int M, N, root;
	cin >> M >> N;
	for (int i = M; i <= N; i++) {
		root = sqrt(i);
		if (root == 1 && i != 1) {
			cout << i << '\n';
			continue;
		}
		if (i % 2) {
			for (int j = 2; j <= root; j++) {
				if (!(i % j))
					break;
				if (j == root) {
					printf("%d\n", i);
				}
			}
		}
	}
}
*/
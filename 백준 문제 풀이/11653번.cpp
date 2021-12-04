#include<iostream>
using namespace std;
int main() {
	int n; cin >> n;
	// 입력받는 수 n
	int i = 2;
	// 인수 i
	while (1) {
		if (n == 1) break;
		// 1일될 때 == 소인수분해가 끝나면

		if (n % i == 0) {	// i로 나눠 떨어지면
			n /= i;
			// 입력 받은 n을 i로 나눈 값 n에 재 할당
			cout << i << "\n";
		}
		else i++;
		// 인수 i는 더이상 안나눠지니 1증가해서 계산
	}
}
/*
#include <iostream>
using namespace std;

int main() {
	int N;
	cin >> N;

	if (N == 1) return 0;

	for (int i = 2; i <= N; i++) {
		while (N % i == 0) {
			cout << i << endl;
			N /= i;
		}
	}

}
*/
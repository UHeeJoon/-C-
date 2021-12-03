#include<iostream>
using namespace std;
int main() {
	int n[100] = { 0 };
	// 주어수의 개수 100 n[100]

	int b; cin >> b; 
	// 입력 횟수 b

	int count = 0;
	// 소수가 아닌 수의 개수 셀 count
	for (int i = 0; i < b; i++) {
		cin >> n[i];	//숫자 입력

		if (n[i] == 1)	// 1은 제외
			count++;

		for (int j = 2; j <= n[i] / 2; j++) {
			// 2 제외하기 위해서  n[i] / 2 사용
			if (n[i] % j == 0) {
				// 소수가 아니면 count++
				count++;
				break;
			}
		}
	}
	cout << b - count; // 총 입력받은 수의 개수 - 소수가 아닌 수의 개수
}
/*
// 에라토스테네스의 체 활용
#include <iostream>
#include <cmath>
using namespace std;
int N;
bool isPrime(int x) {
	if (x == 1) return false;
	else if (x == 2) return true;
	else {
		for (int i = 2; i <= sqrt(x); i++) {
			for (int j = i + i; j <= x; j += i) {
				if (j == x) return false;
			}
		}
		return true;
	}
}

int main(void) {
	cin >> N;
	int cnt = 0;
	for (int i = 0; i < N; i++) {
		int input;
		cin >> input;
		if (isPrime(input)) cnt++;
	}
	cout << cnt << endl;
}
*/
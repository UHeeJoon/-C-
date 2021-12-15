#include<iostream>
#include<cmath>
using namespace std;
int main() {
	int T, a, b;
	// 테스트 케이스 T / 밑 a / 지수 b
	cin >> T;
	for (int i = 0; i < T; i++) {
		cin >> a >> b;
		if (a %10 == 0)
			// 10번 데이터
			cout << 10 << "\n";
		else if(b % 4 == 0)
			// a의 0 제곱이 되는것을 고려
			cout << (int)pow(a, 4) % 10 << "\n";
		else
			cout << (int)pow(a, b % 4 ) % 10 << "\n";
		// 1의 자리 수는 4번째마다 같은 수 반복되므로 계산
	}
}
#include<iostream>
using namespace std;
int main() {
	long long N;
	int F;
	// 두 정수 N / F
	cin >> N >> F;
	N = N - N % 100;
	// 십의자리와 일의 자리 00으로 만듦
	for (int i = 0; i < 100; i++) {
		// 00부터 99까지 
		if (N % F == 0) {
			// 나눠지면 종료
			break;
		}
		N += 1;
		// N의 값 증가
	}
	F = N % 100;
	// 메모리를 줄이기 위해 F 재사용
	// F는 결과값 뒤의 두자리
	if (F / 10 == 0)
		// 00 01 02 와 같이 출력하기 위한 0 출력
		cout << 0 << F;
	else
		cout << F;
}
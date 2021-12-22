#include<iostream>
using namespace std;
#define MAX 1000000000
int main() {
	long long X, Y, Z;
	// 전체 횟수 X / 이긴 횟수 Y / 승률 Z
	cin >> X >> Y;
	Z = Y * 100 / X;
	// 이긴 활률 10의 자리 표현
	if (Z >= 99) {
		// 확률이 안바뀌는 경우
		cout << -1; return 0;
	}
	long long low = 0, high = MAX;
	// 2분 탐색
	while (low <= high) {
		long long temp = (low + high) / 2; 
		long long win = 100 * (Y + temp) / (X + temp);
		if (Z < win) { 
			high = temp - 1; 
		}
		else { 
			low = temp + 1;
		}
	}
	cout << low;
}
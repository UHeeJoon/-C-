
#include<iostream>
using namespace std;
int main() {
	int t, k, n; cin >> t;
	// 입력 횟수 t/ 층 k/ 호 n
	int A[15][14] = { 0 };	// 1 ≤ k, n ≤ 14
	for (int i = 0; i < 15; i++)
		A[0][i] = i + 1;	// 0층은 1 ~ 14 까지 들어있음
	for (int i = 0; i < 14; i++) {	// 2차원 배열 값 대입
		for (int j = 0; j < 14; j++) { // 2차원 배열 값 대입
			int d = 0;
			for (int k = 0; k <= j; k++) {	
				d += A[i][k];	// 층별로 각 호수에 해당하는 값 d에 +
			}
			A[i + 1][j] = d;	// 더해진 d는 바로 위층에 필요한 값
		}
	}
	for (int i = 0; i < t; i++) {
		cin >> k >> n;
		cout << A[k][n - 1] << "\n";
	}
}

/*
#include <stdio.h>
#include <iostream>
#include <string>

using namespace std;

int room(int a, int b) {

	if (a == 0) {
		cout << b << endl; 
		return b; } // 층 수가 0일 때는 해당 호수로 return
	if (b == 1) {
		cout << b << endl;
		return 1;
	} // 호 수가 1일 때는 무조건 1 return

	// 해당 호수의 같은 층 전 호수 + 해당 호수의 밑에 층 호수 의 수의 합
	// 재귀 함수 호출
	
	return (room(a - 1, b) + room(a, b - 1));

}

int main() {
	int t;
	cin >> t;
	int k, n;
	for (int i = 0; i < t; i++) {
		cin >> k >> n;
		cout << room(k, n) << endl;
	}
}
*/
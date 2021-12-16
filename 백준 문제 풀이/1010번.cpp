#include<iostream>
using namespace std;
int main() {
	int T, N, M;
	// 태스트 케이스 T / 서쪽 다리 N  /동쪽 다리 M
	cin >> T;
	for (int i = 0; i < T; i++) {
		double sum = 1, sum2 = 1;
		// 순열과 조합에 사용할 sum, sum2
		cin >> N >> M;
		// ------------------------------------
		// nCr 공식 사용 팩토리얼 경우의 수
		for (int j = N + 1; j < M + 1; j++) {
			// n! / r! 부분
				sum = sum * j;
		}
		for (int j = 2; j < M - N + 1; j++) {
			// (n - r)! 부분
				sum2 = sum2 * j;
		}
		// ---------------------------------------
		printf("%0.0f\n", sum/sum2);	
		// 지수 표현제거를 위한 %0.0f / sum/sum2 == (n!) / r! * (n-r)!
	}
}
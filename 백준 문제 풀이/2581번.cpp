#include<iostream>
using namespace std;
int main() {
	int m, n; cin >> m >> n;
	int sum = 0, min = n;
	// 소수들의 합 sum / 소수들중 최소값 min
	for (int i = m; i <= n; i++) { // M이상 N이하의 자연수
		
		bool num = false; // 소수인지 판별할 num

		for (int j = 2; j < (i / 2 + 2); j++) {	// i가 2일 때를 위해 i/2+2 사용

			// 2일 때
			if (i == 2) { 
				num = true; 
				break;
			}

			// 2를 제외하고
			else {
				if (i % j == 0) {	// 소수가 아니면
					num = false;	// flase
					break;
				}
				else num = true;	// 소수면 true
			}

		}
		if (num) {	// 소수이면
			
			sum += i;	// sum에 더한다	

			if (i < min)	// 최소값 판별
				min = i;
		}
	}
	sum != 0 ? cout << sum << "\n" << min : cout << -1;
	// 소수가 있었으면 sum과 min값 출력/ 없었으면 -1출력
}
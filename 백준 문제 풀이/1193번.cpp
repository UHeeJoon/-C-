#include<iostream>
using namespace std;
int main() {
	int a; cin >> a;
	int k = 1, num = 1, i = 1, j = 1, count = 0;
	// k 는 값의 증감/ num은 각 대각 선 횡의 최댓값/ i는 분자/ j는 분모 / count는 시행 횟수
	while (1) {
		if (k > 0) {	// ↙의 순서일 때 
			for (i = num, j = 1; j < num + 1; i -= k, j += k) {
				count++;	// 시행 횟수 증가
				if (count == a)		// 원하는 위치에 도달하면 종료
					break;
			}
			k *= -1, num++;	// k*-1로 방향 변경 / num++횡의 최댓값 증가
		}
		else {		// ↗의 순서일 때
			for (i = 1, j = num; i < num + 1; i -= k, j += k) {
				count++;	// 시행 횟수 증가
				if (count == a)		// 원하는 위치에 도달하면 종료
					break;
			}
			k *= -1, num++;	// k*-1로 방향 변경 / num++횡의 최댓값 증가
		}
		if (count == a)
			break;
	}
	cout << i << "/" << j;
}

/*
 #include <iostream>
using namespace std;

int main() {
	int N;
	cin >> N;

	int i = 1;
	while (N > i) {
		N -= i;
		i++;
	}

	if (i % 2 == 1)
		cout << i + 1 - N << '/' << N << endl;
	else
		cout << N << '/' << i + 1 - N << endl;
}
*/
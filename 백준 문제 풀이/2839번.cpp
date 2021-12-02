/*
#include<iostream>
using namespace std;
int main() {
	int n, b = 3, c = 5;
	// 배달할 무게 n / 3키로 설탕 b/ 5키로 설탕 c
	cin >> n;
	int i = 0, j = 0, count = 2000;
	// 3키로 개수 i / 5키로 개수 j/ 가장 작은 횟수를 담을 count
	while (1) {
		if (b * i + c * j == n) {	// 3키로와 5키로 합이 배달할 무게가 같으면

			if (count > i + j)	// 각각의 개수의 합이 count보다 작으면
				count = i + j;	// count에 각각의 개수의 합 대입

			i++, j = 0;	// 3키로 개수 증가, 5키로 0으로 초기화
		}
		else if (b * i + c * j > n) { // 3키로와 5키로 합이 배달할 무게보다 크면
			i++, j = 0;	// 3키로 개수 증가 / 5키로 0으로 초기화
		}
		else
			j++;	// 아무것도 해당하지 않을 때 5키로 개수 증가

		if (b * i >= n)	// 3키로의 총 무게가 배달할 무게보다 크면
			break;
	}
	count == 2000 ? cout << -1 : cout << count;
}
*/

#include <iostream>
using namespace std;
int main() {
	int n; cin >> n;
	int isResult = -1;
	int max = n / 5;
	for (int i = max; i >= 0; --i) {
		int calc = n - (i * 5);
		if ((calc % 3) == 0) {
			isResult = i + (calc / 3);
			break;
		}
	}
	cout << isResult;
}

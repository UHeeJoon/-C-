#include<iostream>
using namespace std;
int main() {
	int a, b = 1, count = 1; // 이동할 방 a/ 방을 담을 b(시작이 1이니 1로 초기화)/ 이동 횟수를 셀 count
	cin >> a;
	for (int i = 0;; i += 6) {	// 시작은 1, 첫번 쨰 껍질의 최대 값 7, 두번째 19, 세번째 37 -> 6의 배수로 늘어남
		b += i;
		if (a - b <= 0) // 몇번 째 방에 있는지만 알면 횟수를 알 수 있음
			break;
		count++;	// 이동 횟수 == 껍질의 개수
	}
	cout << count;
}
#include<iostream>
#include<cmath>
using namespace std;
int main() {
	int x1, x2, y1, y2, r1, r2;
	// 조규현의 좌표 (x1, y1)와 백승환의 좌표 (x2, y2)
	// 조규현이 계산한 류재명과의 거리 r1과 백승환이 계산한 류재명과의 거리 r2
	int T;
	// 입력 케이스
	cin >> T;
	for (int i = 0; i < T; i++) {
		int target;
		// 류재명이 있을 수 있는 위치
		cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2;
		int temp = r1; 
		r1 > r2 ? r1 = r1 : (r1 = r2, r2 = temp);
		// r1에 큰값 고정
		double d = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
		// 두 점사이의 거리 d

		if (d== 0 && r1 ==r2)
			target = -1;
		// 원이 일치할 때

		else if (r1 + r2 == d || r1 - r2 == d )
			target = 1;
		// 내접 또는 외접원일 때

		else if (r1 - r2 < d && d < r1 + r2)
			target = 2;
		// 두 점에서 만날 때

		else target = 0;
		// 만나지 않을 때
		cout << target << endl;
	}
}
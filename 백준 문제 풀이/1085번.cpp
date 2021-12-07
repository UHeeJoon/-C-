#include <iostream>
using namespace std;
int main() {
	int x = 0, y = 0, w = 0, h = 0;
	// 내 위치 (x, y) / 박스 반대 모서리 (w, h)

	int row_min = 1000, col_min = 1000;
	// 직사각형이 경계선까지의 최소거리
	// 가로방향 row_min / 세로 방향 col_min
	cin >> x >> y >> w >> h;

	x > w - x ? row_min = w - x : row_min = x;
	// x는 가로축으로 0까지의 거리/ w-x는 w까지의 거리 -- 둘중 더 작은 수를 row_min에 대입

	y > h - y ? col_min = h - y : col_min = y;
	// y는 세로축으로 0까지의 거리/ h-y는 h까지의 거리 -- 둘중 더 작은 수를 col_min에 대입

	row_min > col_min ? cout << col_min : cout << row_min;
	// 가로축으로가는 것과 세로축으로 가는 것 중 더 짧은거 출력
}
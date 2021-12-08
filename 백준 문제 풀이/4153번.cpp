#include<iostream>
using namespace std;
int main() {
	int w, h, hypo;
	// 밑변 w / 높이 h / 빗변 hypo 
	while (1) { // 무한 루프
		cin >> w >> h >> hypo;
		if (w + h + hypo == 0) break;
		// 3입력이 0이면 while문 종료
		int temp = hypo;
		// 가상 변수 temp

		// ---------빗변을 찾기 위한 조건문
		if (w > h) {
			hypo > w ? hypo : (hypo = w, w = temp);
			// 제일 큰 값을 hypo와 값 변경
		}
		else {
			hypo > h ? hypo = hypo : (hypo = h, h = temp);
			// 제일 큰 값을 hypo와 값 변경
		}
		// ------------------------
		if ((w * w + h * h) == hypo * hypo)
			// 피타코라스의 정리 활용
			cout << "right" << endl;
		else
			cout << "wrong" << endl;
	}
}
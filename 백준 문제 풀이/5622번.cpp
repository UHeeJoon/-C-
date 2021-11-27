
/* 틀린 코드
#include<iostream>
using namespace std;
int main() {
	char a[16] = { 0 };
	cin >> a;
	int b[26] = { 0 }, length = 0, move = 2;
	for (int i = 1; i < 27; i++) {
		if (i < 18) {
			if (i % 3 == 1)
				move++;
			b[i - 1] = move;
		}
		else if (i < 23) {
			if (i % 3 == 2)
				move++;
			b[i - 1] = move;
		}
		else {
			if (i == 23)
				move++;
			b[i - 1] = move;
		}
	}
	for (int i = 1; a[i - 1] != NULL; i++) {
		for (int j = 1; j < 27; j++)
			if ((int)a[i - 1] - 64 == j) {
				length += b[j];
				break;
			}
	}
	cout << length;
}
*/

#include<iostream>
using namespace std;
int main() {
	char a[16] = { 0 };		// 주어진 단어의 길이15 여분 크기 1 추가 생성	/ 입력받는 문자열 a배열
	cin >> a;
	int b[26] = { 0 }, length = 0, move = 2;		// 알파벳 담을 b배열/ 최소 시간 length/ 알파벳당 이동 거리 move -- 1을 거는데 필요한 시간 2초 따라서 move=2
	for (int i = 1; i < 27; i++) {			// 숫자 == 알파벳 -- 알파벳 배열은 0부터 시작이기에 1 더해서 1부터 27까지	
		if (i < 18) {	// 알파벳 3개씩 있는 곳까지 + 7번의 알파벳 2개 -- 계산의 편의성을 위한 추가
			if (i % 3 == 1)	// 6번까지 알파벳 3개단위로 이동 거리 증가 
				move++;
			b[i - 1] = move;	// 해당 알파벳의 이동 거리 대입
		}
		else if (i < 23) {		// 23번째 전까지 4, 3 으로 증가하는데 계산을위한 구역 분할
			if (i % 3 == 2)
				move++;
			b[i - 1] = move;	// 해당 알파벳의 이동 거리 대입
		}
		else {
			if (i == 23)	// 9번에 있는 모든 알파벳
				move++;			//
			b[i - 1] = move;	// 해당 알파벳의 이동 거리 대입
		}
	}
	for (int i = 0; a[i] != NULL; i++) {	// 입력받은 a배열에 빈공간이 나올때까지 실행
		for (int j = 0; j < 26; j++)		// 알파벳 26개
			if (a[i] - 'A' == j) {		// 아스키 코드로 계산
				length += b[j];		// 알파벳 배열에 들어있는 각 알파벳의 이동 거리 + length
				break;		// 찾으면 다음 알파벳으로 넘어감
			}
	}
	cout << length;
}
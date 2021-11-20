#include<iostream>
using namespace std;
int main() {
	char S[101] = { 0 };		 // 조건에 단어의 길이는 100이니 오류를 대비해 1여유를 주고 101생성
	int alpha[26] = { 0 };		// 알파벳을 구하는 것이니 26개의 배열 생성
	cin >> S;					// 알파벳 입력
	for (int i = 0; i < 26; i++) {			
		for (int k = 0; k < 100; k++) {
			if (S[k] == char(i + 97)) {			// 97은 아스키 코드로 'a'
				alpha[i] = k;					// 알파벳이 일치하면 해당위치에 알파벳이 나온 위치 입력
				break;
			}
			else alpha[i] = -1;					// 해당 내용이 없으면 -1 삽입
		}
	}
	for (int i = 0; i < 26; i++)
		cout << alpha[i] << " ";
}
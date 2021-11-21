#include<iostream>
using namespace std;
int main() {
	char a[1000001] = { 0 };	// 단어의 길이 1,000,000
	int alpha[26] = { 0 };		// 알파벳을 담은 배열
	cin >> a;
	for (int i = 0; a[i] != NULL; i++) {	// 단어가 들지 않을 때 까지 실행
		for (int k = 0; k < 26; k++) {
			if (a[i] == char(65 + k) || a[i] == char(97 + k))	// 대 소문자 구분 없이 나오면 해당 위치에 +1	65 == A, 97==a
				alpha[k]++;
		}
	}
	int max = 0, count = 0, alphabet = 0;
	for (int i = 0; i < 26; i++) {
		if (alpha[i] > max)				// 가장 많이 나온 알파벳 검출
			max = alpha[i];
	}
	for (int i = 0; i < 26; i++)
		if (max == alpha[i]) {
			count++;					// 가장 많이 나온 알파벳이 여러개면 count +1
			alphabet = i;
		}
	if (count > 1)
		cout << "?";					// 가장 많이 나온 알파벳이 여러개이면 ? 출력
	else
		cout << char(65 + alphabet);	// 하나면 해당 알파벳 출력			65는 A 즉 대문자로 출력
}
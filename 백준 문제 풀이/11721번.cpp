#include<iostream>
#include<string>
using namespace std;
int main() {
	string str;
	// 입력받을 문자열 str
	cin >> str;
	for (int i = 0; i < (int)str.length(); i++) {
		// 문자열의 길이만큼 반복
		if (i % 10 == 0 && i != 0) cout << endl;
		// 10번 째 마다 줄을 넘김
		cout << str[i];
	}
}
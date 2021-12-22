/*
#include<iostream>
#include<cmath>
#include<string>
using namespace std;
#define SIZE 10
// 색을 담을 배열의 크기
int main() {
	string color[SIZE] = { "black","brown", "red", "orange", "yellow", "green", "blue", "violet", "grey", "white" };
	// 저항의 색 color배열
	string reg1, reg2, mul, result = "";
	// 저항 1 reg1/ 2 reg2/ 3 mul(곱해야해서 mul로 지정) / 결과값을 담을 result
	cin >> reg1 >> reg2 >> mul;
	for (int i = 0; i < SIZE; i++) {
		if (color[i] == reg1)
		// 해당 배열의 값 문자로 변경 
			reg1 = to_string(i);
		if (color[i] == reg2)
		// 해당 배열의 값 문자로 변경
			reg2 = to_string(i);
		if (color[i] == mul)
		// 해당 곲의 값 문자로 변경 후 앞의 1 제거
			mul = to_string((int)pow(10, i)).substr(1);
	}
	result = reg1 + reg2 + mul;
	// result에 해당 값을 대입
	cout << stoll(result);
	// long long 타입으로 변환
}
*/

#include<iostream>
#include<cmath>
#include<string>
using namespace std;
int main() {
	string color[10] = { "black","brown", "red", "orange", "yellow", "green", "blue", "violet", "grey", "white" };
	// 저항 색을 담은 color배열
	string reg, result = "";
	// 입력받을 reg와 / 결과 값을담을 result 숫자가 커서 문자열로 계산함
	for (int i = 0; i < 3; i++) {
		// 3번 입력 받음
		cin >> reg;
		for (int j = 0; j < 10; j++) {
			// 입력받은 reg에서 각각의 값 도출
			if (i == 2 && reg == color[j]) {
				// 마지막 값은 곱해야하는 숫자 - 따로 계산
				result += to_string((int)pow(10, j)).substr(1);
				// 제곱해서 나온 수를 문자열로 바꾸고 바꿔서 나온 문자열의 앞 1 제거
				break;
			}
			else if (i != 2 && reg == color[j]) {
				// 마지막을 제외한
				result += to_string(j);
				// 문자열로서 덧샘 ex) "1" + "1" = "11"
				break;
			}
		}
	}
	cout << stoll(result);
	// 문자열 그대로 출력하면 틀려서 long long 타입으로 변환
}

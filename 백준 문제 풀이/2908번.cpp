/*
#include<iostream>
#include<string>
using namespace std;
int main() {
	string a, b; int c = 0, d = 0;
	cin >> a >> b;				// 문자열 입력받음
	for (int i = 0, j = 1; i < a.length(); i++, j *= 10) {		// 문자열의 길이만큼 반복
		c += ((int)a[i] - 48) * j;								// 백의 자릿수 *1, 십의자리 *10, 일의자리 *100 해서 c에 대입
	}
	for (int i = 0, j = 1; i < b.length(); i++, j *= 10) {
		d += ((int)b[i] - 48) * j;			// 백의 자릿수 *1, 십의자리 *10, 일의 자리 *100 해서 d에 대입
	} 
	c > d ? cout << c : cout << d;		// c가 d보다 크면 c출력 아니면 d출력
}
*/

#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main() {
	string num1, num2, result;
	cin >> num1 >> num2;
	for (int i = num1.length() - 1; i >= 0; i--) { // 1의 자릿수 부터 더 큰수를 판별
		if (num1[i] > num2[i]){					   // 둘중 더 큰 수를 result에 대입 후 for문 종료
			result = num1; break;
	}
		else if (num1[i] < num2[i]) {
			result = num2; break;
		}
	}
	reverse(result.begin(), result.end());		   // result를 역순으로 변환
	for (char i : result)cout << i;					// foreach문으로 출력
}
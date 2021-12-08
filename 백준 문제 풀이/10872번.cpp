#include<iostream>
using namespace std;
int factorial(int num) {
	if (num == 0) return 1;
	// 0이면 1 리턴
	int mul = num;
	// 팩토리얼한 값을 담을 mul
	if (mul == 1) return mul;
	// 1이 되면 재귀함수 종료
	return mul * factorial(mul - 1);
	// 10 입력시
	// 10 * (9 * ((8 * (((7 * ((((6 * (((((5 * ((((((4 * (((((((3 * ((((((((2 * ((((((((((1
	// ( 하나당 반복 횟수
}
int main() {
	int num; cin >> num;
	cout << factorial(num);
}
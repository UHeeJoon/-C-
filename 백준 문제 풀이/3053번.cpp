#include<iostream>
using namespace std;
#define PI 3.14159265359
int main() {
	// --- 소수점 6번째 자리까지 고정
	cout << fixed;
	cout.precision(6);
	// -----------------------------

	double R; // 반지름
	cin >> R;

	cout << PI * R * R << endl;
	// 유클리드 기하학 원의 넓이 공식
	
	cout << 2 * R * R << endl;
	// 택시 기하학 원의 넓이 공식
}
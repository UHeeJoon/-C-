#include<iostream>
using namespace std;
int cnt = 0;
int Fibonacci(int num) {
	int fibo1 = 0, fibo2 = 1, fibo3 = fibo1 + fibo2;

	cnt++;
	if (cnt == num)
		return fibo3;
	return 0;
}
int main() {
	int num; cin >> num;
	cout << Fibonacci(num);
}

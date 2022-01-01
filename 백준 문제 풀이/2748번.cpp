#include<iostream>
using namespace std;
long long fibo[92] = { 0,1 };
void fibonacci(int num, int max) {
	if (num == max + 1) return;
	fibo[num] = fibo[num - 1] + fibo[num - 2];
	fibonacci(num +1, max);
}
int main() {
	int n; cin >> n;
	fibonacci(2, n);
	cout << fibo[n];
}
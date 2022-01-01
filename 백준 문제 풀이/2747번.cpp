#include<iostream>
using namespace std;
int fibo[48] = { 0,1 };
void fibonacci(int n) {
	if (n == 1) return;
	fibonacci(n - 1);
	fibo[n] = fibo[n - 1] + fibo[n - 2];
}
int main(){
	int n; cin >> n;
	fibonacci(n);
	cout << fibo[n];
}
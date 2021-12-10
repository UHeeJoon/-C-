#include<iostream>
using namespace std;
int cnt = 0;
int Fibonacci(int num) {
    if (num == 0)
        return 0;
    if (num == 1)
        return 1;
    return Fibonacci(num - 2) + Fibonacci(num - 1);
}
int main() {
	int num; cin >> num;
	cout << Fibonacci(num);
}

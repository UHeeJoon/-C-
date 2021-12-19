#include<iostream>
using namespace std;
int main() {
	long long N;
	int F;
	cin >> N >> F;
	N = N - N % 100;
	for (int i = 0; i < 100; i++) {
		if (N % F == 0) {
			break;
		}
		N += 1;
	}
	int num = N % 100;
	if (num / 10 == 0)
		cout << 0 << num;
	else
		cout << num;
}
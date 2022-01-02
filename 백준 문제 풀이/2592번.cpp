#include<iostream>
using namespace std;
int num[101];
int main() {
	int avg = 0, a;
	for (int i = 0; i < 10; i++) {
		cin >> a;
		num[a/10 -1] += 1;
		avg += a;
	}
	for (int i = 0; i < 100; i++) {
		if (num[0] <= num[i]) {
			a = (i + 1) * 10;
			num[0] = num[i];
		}
	}
	cout << avg / 10 << "\n" << a;
}
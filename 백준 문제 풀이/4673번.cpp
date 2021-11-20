#include<iostream>
using namespace std;
int self_num(int a) {
	int selfn;
	int sum = 0;
	int s = a;
	while (a > 0) {
		sum += a % 10;
		a /= 10;
	}
	selfn = s + sum;
	return selfn;
}

int main() {
	int Array[10010] = { 0 }, stack = 1, num = 0;;
	for (int i = 1; i < 10000; i++) {
		if (self_num(i) < 10000) {
			num = self_num(i);
			Array[num] = 1;
		}
	}
	for (int i = 1; i < 10000; i++)
		if (Array[i] != 1)
			cout << i << "\n";
}
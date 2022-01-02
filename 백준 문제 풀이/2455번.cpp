#include<iostream>
#include<algorithm>
using namespace std;
int main() {
	int sum = 0, Max = 0;
	for (int i = 0; i < 4; i++) {
		int out, in;
		cin >> out >> in;
		Max += in - out;
		sum = max(Max, sum);
	}
	cout << sum;
}
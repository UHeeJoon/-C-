#include<iostream>
#include<algorithm>
using namespace std;
int main() {
	int num, sum = 0 , min = 100;
	for (int i = 0; i < 7; i++) {
		cin >> num;
		if (num % 2 == 1) {
			sum += num;
			if (num < min)
				min = num;
		}
	}
	sum != 0 ? cout << sum << "\n" << min : cout << -1;
}
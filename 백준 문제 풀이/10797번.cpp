#include<iostream>
using namespace std;
int main() {
	int num, count = 0; cin >> num;
	for (int i = 0; i < 5; i++) {
		int a; cin >> a;
		if (a == num)
			count += 1;
	}
	cout << count;
}
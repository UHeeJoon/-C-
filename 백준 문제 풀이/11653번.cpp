#include<iostream>
using namespace std;
int main() {
	int a; cin >> a;
	int i = 2;
	while (1) {
		if (a == 1) break;
		if (a % i == 0) {
			a /= i;
			cout << i << "\n";
		}
		else i++;
	}
}
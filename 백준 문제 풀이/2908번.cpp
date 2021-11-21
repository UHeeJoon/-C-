#include<iostream>
#include<string>
using namespace std;
int main() {
	string a, b; int c = 0, d = 0;
	cin >> a >> b;
	for (int i = 0, j = 1; i < a.length(); i++, j *= 10) {
		c += ((int)a[i] - 48) * j;
	}
	for (int i = 0, j = 1; i < b.length(); i++, j *= 10) {
		d += ((int)b[i] - 48) * j;
	}
	c > d ? cout << c : cout << d;
}
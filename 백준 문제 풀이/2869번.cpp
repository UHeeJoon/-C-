#include<iostream>
using namespace std;
int main() {
	int a, b, c; cin >> a >> b >> c;
	(c - a) % (a - b) != 0 ? cout << (c - a) / (a - b) + 2 : cout << (c - a) / (a - b) + 1;
}
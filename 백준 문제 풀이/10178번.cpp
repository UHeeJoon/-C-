#include<iostream>
using namespace std;
int main() {
	int N; cin >> N;
	for (int i = 0; i < N; i++) {
		int c, v; cin >> c >> v;
		cout << "You get " << c / v << " piece(s) and your dad gets " << c % v << " piece(s).\n";
	}
}
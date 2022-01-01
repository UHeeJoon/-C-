#include<iostream>
using namespace std;
int main() {
	int T; cin >> T;
	for (int i = 0; i < T; i++) {
		int s, n; cin >> s >> n;
		int sum = s;
		for (int j = 0; j < n; j++) {
			int q, p; cin >> q >> p;
			sum += q * p;
		}
		cout << sum << "\n";
	}
}
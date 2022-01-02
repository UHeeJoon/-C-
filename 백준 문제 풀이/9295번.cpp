#include<iostream>
using namespace std;
int main() {
	int N; cin >> N;
	for (int i = 1; i <= N; i++) {
		int o, t; cin >> o >> t;
		cout << "Case " << i << ": " << o + t << "\n";
	}
}
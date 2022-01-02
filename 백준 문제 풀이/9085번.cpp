#include<iostream>
using namespace std;
int main() {
	int T, N, num; cin >> T;
	for (int i = 0; i < T; i++) {
		int sum = 0; cin >> N;
		for (int j = 0; j < N; j++) {
			cin >> num;
			sum += num;
		}
		cout << sum << "\n";
	}
}
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main() {
	int T; cin >> T;
	vector<long> waiting;
	for (int i = 0; i < T; i++) {
		long early, late;
		cin >> early >> late;
		waiting.push_back(late - early);
	}
	sort(waiting.begin(), waiting.end());
	if (T % 2 == 1) {
		cout << 1;
	}
	else {
		cout << waiting[T / 2] - waiting[T / 2 - 1] + 1;
	}
}
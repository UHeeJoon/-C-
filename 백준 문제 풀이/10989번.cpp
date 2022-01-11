#include<iostream>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	int n; cin >> n;
	int num[10002] = { 0 };
	for (int i = 0; i < n; i++) {
		int temp;
		cin >> temp;
		num[temp] += 1;
	}
	for (int i = 1; i <= 10000; i++) {
		for (int j = 0; j < num[i]; j++) {
			cout << i << "\n";
		}
	}
	return 0;
}
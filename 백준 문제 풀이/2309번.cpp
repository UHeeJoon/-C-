#include<iostream>
#include<algorithm>
using namespace std;
int nanj[10];
int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	for (int i = 0; i < 9; i++) cin >> nanj[i];
	sort(nanj, nanj + 9);
	do {
		for (int i = 0; i < 9; i++) cout <<  nanj[i] << " ";
		cout << "\n";
		int sum = 0;
		for (int i = 0; i < 7; i++) sum += nanj[i];
		if (sum == 100)break;
	} while (next_permutation(nanj, nanj + 9));
	for (int i = 0; i < 7; i++) cout << nanj[i] << "\n";
}
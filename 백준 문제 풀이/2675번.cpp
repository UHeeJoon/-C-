#include<iostream>
using namespace std;
int main() {
	char S[21] = { 0 }, P[170] = { 0 };
	int T, sum = 0; cin >> T;
	int R;
	for (int i = 0; i < T; i++) {
		cin >> R >> S;
		for (int j = 0, k = 0; j < 21; j++) {
			if (S[j] != NULL)
				for (int m = 0; m < R; k++, m++) {
					P[k] = S[j];
					sum++;
				}
			else break;
		}
		P[sum] = NULL;
		sum = 0;
		cout << P << "\n";
	}
}
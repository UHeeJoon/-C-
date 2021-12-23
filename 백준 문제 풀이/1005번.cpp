#include<iostream>
#include<algorithm>
using namespace std;
int D[1001] = { 0 }, D_copy[1001]= { 0 };
int main() {
	int T, N, K, X, Y, W;
	cin >> T;
	for (int i = 0; i < T; i++) {
		cin >> N >> K;
		for (int j = 0; j < N; j++) {
			cin >> D[j];
		}
		copy(D, D + N, D_copy);
		for (int j = 0; j < K; j++) {
			cin >> X >> Y;
			
		}
		cin >> W;
		for (int i = 0; i < 8; i++) {
			cout << D_copy[i] << endl;
		}
		cout << D_copy[W - 1] << endl;
	}
}
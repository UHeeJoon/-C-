#include<iostream>
#include<algorithm>
using namespace std;
int n[101];
int main() {
	int N, M; cin >> N >> M;
	for (int i = 0; i < N; i++) {
		cin >> n[i];
	}
	sort(n, n + N);
	int sum = 0;
	for (int i = 0; i < N-2; i++) {
		for (int j = i + 1; j < N - 1; j++) {
			for (int k = j + 1; k < N; k++) {
				if (n[i] + n[j] + n[k] == M) { 
					sum = M; 
					break;
				}
				else if (sum < n[i] + n[j] + n[k] && n[i] + n[j] + n[k] < M) {
					sum = n[i] + n[j] + n[k];
				}
				else {
					continue;
				}
			}
			if (sum == M) break;
		}
		if (sum == M) break;
	}
	cout << sum;
}
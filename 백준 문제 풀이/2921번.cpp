#include<iostream>
using namespace std;
int domino[1002];
void domino_set(int n) {
	if (n == 0)return;
	int sum = 0;
	for (int i = 1; i <= n; i++) sum += i;
	domino_set(n - 1);
	domino[n] = domino[n - 1] + (n + 1) * n + sum;
}
int main() {
	int N; cin >> N;
	domino_set(N);
	cout << domino[N];
}
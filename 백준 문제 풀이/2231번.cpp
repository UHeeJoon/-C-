#include<iostream>
using namespace std;
int num[8], cnt = 0;
int sum(int a[]) {
	int sum = 0;
	for (int i = 0; i < 8; i++) {
		sum += a[i];
	}
	return sum;
}
void split(int N) {
	cnt = 0;
	for (int i = 0;; i++) {
		num[i] = N % 10;
		cnt++;
		if (N / 10 == 0) break;
		N = N / 10;
	}
}
void Clear() {
	for (int i = 0; i < 8; i++) num[i] = 0;
}
int main() {
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int N; cin >> N;
	bool exist = true;
	split(N);
	int temp = N - cnt * 9;
	for (int i = temp; i < N; i++) {
		split(i);
		if (i + sum(num) == N) {
			cout << i;
			exist = false;
			break;
		}
		Clear();
	}
	if (exist)	
		cout << 0;
}
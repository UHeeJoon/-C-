#include<iostream>
#include<algorithm>
using namespace std;
char s[52][52], s2[9][9];
int n, m;
int drow(int n, int m) {
	int cnt = 0;
	for (int i = 0; i < 8 ; i++) {
		for (int j = 0; j < 8 ; j++) {
			if (s[n + i][m + j] == s2[i][j]) {
				cnt++;
			}
		}
	}
	return min(64 - cnt, cnt);
}
void Init() {
	for (int i = 0; i < 8; i++) {
		for (int j = 0; j < 8; j++) {
			if (i & 1)
				s2[i][j] = j & 1 ? 'W' : 'B';
			else
				s2[i][j] = j & 1 ? 'B' : 'W';
		}
	}
}
int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> s[i][j];
		}
	}
	Init();
	int mn = 5000;
	for (int i = 0; i + 8 <= n ; i++) {
		for (int j = 0; j + 8<= m ; j++) {
			mn = min( drow(i, j), mn);
		}
	}
	cout << mn << "\n";
}
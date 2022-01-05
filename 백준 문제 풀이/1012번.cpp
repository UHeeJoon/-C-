//DFS
#include<iostream>
#include<string>
using namespace std;
int dx[] = { -1, 0, 1, 0 };
int dy[] = { 0, 1, 0, -1 };
int a[51][51];
int m, n, k, y, x, ret, ny, nx, t;
bool visited[51][51];
void dfs(int y, int x) {
	visited[y][x] = 1;
	for(int i = 0; i < 4; i++) {
		ny = y + dy[i];
		nx = x + dx[i];
		if (ny < 0 || nx < 0 || ny >= n || nx >= m)continue;
		if (a[ny][nx] == 1 && !visited[ny][nx]) {
			dfs(ny, nx);
		}
	}
	return;
}
int main() {
	cin.tie(NULL); cout.tie(NULL);
	cin >> t;
	while (t--){
		fill(&a[0][0], &a[0][0] + 51 * 51, 0);
		fill(&visited[0][0], &visited[0][0] + 51 * 51, 0);
		ret = 0;
		cin >> m >> n >> k;
		for (int i = 0; i < k; i++) {
			cin >> x >> y;
			a[y][x] = 1;
		}
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < m; j++) {
				if (a[i][j] == 1 && !visited[i][j]) {
					dfs(i, j);
					ret++;
				}
			}
		}
		cout << ret << "\n";
	}
	return 0;
}

/*
#include<iostream>
#include<cstring>
using namespace std;
bool check[51][51];
int dx[] = { -1, 1, 0, 0 };
int dy[] = { 0, 0, 1, -1 };
int a[51][51];
int m, n, k;
void dfs(int x, int y) {
	check[x][y] = true;
	for (int i = 0; i < 4; i++) {
		int nx = x + dx[i];
		int ny = y + dy[i];
		if (nx >= 0 && nx < n && ny >= 0 && ny < m) {
			if (a[nx][ny] == 1) {
				if (!check[nx][ny]) {
					dfs(nx, ny);
				}
			}
		}
		else continue;
	}
}
int main() {
	int t;
	cin >> t;
	while (t--) {
		cin >> m >> n >> k;
		int cnt = 0;
		for (int i = 0; i < k; i++) {
			int x, y;
			cin >> x >> y;
			a[y][x] = 1;
		}
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < m; j++) {
				if (a[i][j] == 1) {
					if (!check[i][j]) {
						cnt++;
						dfs(i, j);
					}
				}
			}
		}
		cout << cnt << '\n';
		memset(check, false, sizeof(check));
		memset(a, 0, sizeof(a));
	}
}
*/
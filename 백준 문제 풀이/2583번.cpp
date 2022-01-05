#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int _map[104][104], m, n, k;
const int dy[4] = { -1,0,1,0 };
const int dx[4] = { 0,1,0,-1 };
vector<int>ret;
int dfs(int y, int x) {
	_map[y][x] = 1;
	int _ret = 1;
	for (int i = 0; i < 4; i++) {
		int ny = y + dy[i];
		int nx = x + dx[i];
		if (ny < 0 || ny >= m || nx < 0 || nx >= n || _map[ny][nx] == 1) continue;
		_ret += dfs(ny, nx);
	}
	return _ret;
}
int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	int x1, y1, x2, y2;
	cin >> m >> n >> k;
	for (int i = 0; i < k; i++) {
		cin >> x1 >> y1 >> x2 >> y2;
		for (int x = x1; x < x2; x++) {
			for (int y = y1; y < y2; y++) {
				_map[y][x] = 1;
			}
		}
	}
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			if (_map[i][j] != 1) {
				ret.push_back(dfs(i, j));
			}
		}
	}
	sort(ret.begin(), ret.end());
	cout << ret.size() << "\n";
	for (int _ret : ret)cout << _ret << " ";
}
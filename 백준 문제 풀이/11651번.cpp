#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
vector<pair<int, int>> point;
bool comp(pair<int, int> x, pair <int, int> y) {
	if (x.second == y.second)
		return x.first < y.first;
	return x.second < y.second;
}
int main() {
	int n, x, y; cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> x >> y;
		point.push_back({ x,y });
	}
	sort(point.begin(), point.end(), comp);
	for (int i = 0; i < n; i++) {
		cout << point[i].first << " " << point[i].second << "\n";
	}
}
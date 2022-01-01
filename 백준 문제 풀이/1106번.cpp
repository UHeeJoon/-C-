#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
#define MAX 100001
int temp[MAX];
int main() {
	int C, N; cin >> C >> N;
	vector<pair<int, int>> city;
	for (int i = 0; i < N; i++) {
		int cost, costomer;
		cin >> cost >> costomer;
		city.push_back(make_pair(cost, costomer));
	}
	for (int i = 0; i < (int)city.size(); i++) {
		for (int j = 1; j <= MAX; j++) {
			if (j - city[i].first >= 0) {
				temp[j] = max(temp[j], temp[j - city[i].first] + city[i].second);
			}
		}
	}
	for (int i = 1; i <= MAX; i++) {
		if (temp[i] >= C) {
			cout << i;
			break;
		}
	}

}
#include<iostream>
#include<vector>
using namespace std;
vector<pair<int, int>> lst;
int main() {
	int N; cin >> N;
	for (int i = 0; i < N; i++) {
		int weight, height;
		cin >> weight >> height;
		lst.push_back(make_pair(weight, height));
	}
	int rank = 1;
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			if (lst[i].first < lst[j].first && lst[i].second < lst[j].second)
				rank++;
		}
		cout << rank << " ";
		rank = 1;
	}
}
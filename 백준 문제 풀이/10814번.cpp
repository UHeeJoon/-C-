#include<iostream>
#include<algorithm>
#include<string>
#include<vector>
using namespace std;
vector<pair<int, string>> reg;
bool comp(pair<int, string> a, pair<int, string> b) {
	return a.first < b.first;
}
int main() {
	int n; cin >> n;
	for (int i = 0; i < n; i++) {
		int age; string name;
		cin >> age >> name;
		reg.push_back({ age,name });
	}
	stable_sort(reg.begin(), reg.end(), comp);
	for (int i = 0; i < n; i++) {
		cout << reg[i].first << " " << reg[i].second << "\n";
	}
}
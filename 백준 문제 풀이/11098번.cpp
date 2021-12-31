#include<iostream>
#include<map>
#include<string>
#include<algorithm>
using namespace std;
int main() {
	map<int, string> player;
	int n, p; cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> p;
		for (int j = 0; j < p; j++) {
			int value; string name;
			cin >> value >> name;
			player.insert(make_pair(value, name));
		}
		auto x = max_element(player.begin(), player.end(), player.value_comp());
		cout << x->second << endl;
		player.clear();
	}
}
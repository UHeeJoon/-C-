#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
string str;
bool sum() {
	int sum = 0;
	for (int i = 0; i < (int)str.size(); i++) {
		sum += (int)str[i] - '0';
	}
	return sum % 3 == 0;
}
bool comp(const char& a, const char& b) {
	return a > b;
}
int main() {
	cin >> str;
	sort(str.begin(), str.end(), comp);
	if (sum()) {
		if (!(str[(int)str.size() - 1] - '0')) cout << str;
		else cout << -1;
	}
	else {
		cout << -1;
	}
	return 0;
}
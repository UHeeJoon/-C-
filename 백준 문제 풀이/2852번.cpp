#include<iostream>
#include<string>
using namespace std;
int n, o, A, B, asum, bsum;
string s, prev1;
string print(int a) {
	string d = "0" + to_string(a / 60);
	string e = "0" + to_string(a % 60);
	return d.substr(d.size() - 2) + ":" + e.substr(e.size() - 2);
}
int changeToInt(string a) {
	return atoi(a.substr(0, 2).c_str()) * 60 + atoi(a.substr(3).c_str());
}
void go(int& sum, string s) {
	sum += (changeToInt(s) - changeToInt(prev1));
}
int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> o >> s;
		if (A > B) go(asum, s);
		else if (B > A) go(bsum, s);
		o == 1 ? A++ : B++;
		prev1 = s;
	}
	if (A > B)go(asum, "48:00");
	else if (B > A) go(bsum, "48:00");
	cout << print(asum) << "\n";
	cout << print(bsum) << "\n";
}
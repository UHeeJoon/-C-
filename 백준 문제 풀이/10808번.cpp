#include<iostream>
#include<string>
using namespace std;
string str;
int cnt[27];
int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	cin >> str;
	for (char a : str) cnt[a - 'a']++;
	for (int i = 0; i < 26; i++) cout << cnt[i] << " ";
	return 0;
}
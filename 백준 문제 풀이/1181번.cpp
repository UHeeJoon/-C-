/* 새로운 방법
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool Comp(string a, string b) {
	if (a.length() != b.length())
		return a.length() < b.length();
	else
		return a < b;
}

int main() {
	int N;
	vector<string> vec;
	cin >> N;
	for (int i = 0; i < N; i++) {
		string str;
		cin >> str;
		if (find(vec.begin(), vec.end(), str) == vec.end())
			vec.push_back(str);
	}
	sort(vec.begin(), vec.end(), Comp);

	for (int i = 0; i < vec.size(); i++) {
		cout << vec[i] << '\n';
	}
}
*/



// 포인터 자못된 활용
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
bool Comp(string a, string b) {
	if (a.length() != b.length())
		return a.length() < b.length();
	else
		return a < b;
}

int main() {
	int N; cin >> N;
	string* str = new string[N];
	for (int i = 0; i < N; i++) cin >> str[i];
	sort(str, str + N, Comp);
	for (int i = 0; i < N; i++) {
		if (str[i - 1] == str[i]) continue;
		cout << str[i] << endl;
	}
}


/*
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
bool Comp(string a, string b) {
	if (a.length() != b.length())
		return a.length() < b.length();
	else
		return a < b;
}

int main() {
	int N; cin >> N;
	string* str = new string[N];
	for (int i = 0; i < N; i++) cin >> str[i];

	for (int i = 0; i < N - 1; i++) {
		int len = str[i].length();
		for (int j = i + 1; j < N; j++) {
			if (len > (int)str[j].length()) {
				string temp = str[i];
				str[i] = str[j];
				str[j] = temp;
				len = str[i].length();
			}
		}
	}
	sort(str, str + N, Comp);

	for (int i = 0; i < N; i++) {
		if (str[i - 1] == str[i]) continue;
		cout << str[i] << endl;
	}
}
*/
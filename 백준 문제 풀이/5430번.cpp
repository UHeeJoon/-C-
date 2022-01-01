#include<iostream>
#include<string>
using namespace std;
int n[100001];
int main() {
	int T; cin >> T;
	for (int i = 0; i < T; i++) {
		string p; cin >> p;
		int a; cin >> a;
		for(int j=0;j<a;j++)
			scanf_s("%d", &n[j]);
		cout << n[0];
	}
}
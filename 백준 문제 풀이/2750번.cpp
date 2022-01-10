/*
#include<iostream>
using namespace std;
int num[1001];
int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	int n; cin >> n;
	for (int i = 0; i < n; i++) cin >> num[i];
	for (int i = 0; i < n - 1; i++) {
		int temp = num[i];
		for (int j = i + 1; j < n; j++) {
			if (temp > num[j]) {
				num[i] = num[j];
				num[j] = temp;
				temp = num[i];
			}
		}
	}
	for (int i = 0; i < n; i++) cout << num[i] << "\n";
	return 0;
}
*/
#include<iostream>
#include<algorithm>
using namespace std;
int num[1001];
int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	int n; cin >> n;
	for (int i = 0; i < n; i++) cin >> num[i];
	sort(num, num + n);
	for (int i = 0; i < n; i++) cout << num[i] <<"\n";
	return 0;	
}
#include<iostream>
#include<algorithm>
using namespace std;
int main() {
	int number; cin >> number;
	int cnt = 0, num[10];
	for (int i = 0;number!=0; i++) {
		num[i] = number % 10;
		number /= 10;
		cnt++;
	}
	sort(num, num + cnt, greater<>());
	for (int i = 0; i < cnt; i++)
		cout << num[i];
}
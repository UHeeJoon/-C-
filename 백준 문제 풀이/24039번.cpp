#include<iostream>
#include<vector>
using namespace std;
int prime[122];
vector<int> year;
int main() {
	prime[0] = 1, prime[1] = 0;
	for (int i = 2; i <= 11; i++) {
		for (int j = i + i; j <= 121; j += i) {
			if (prime[j - 1] != 1)
				prime[j - 1] = 1;
		}
	}
	for (int i = 2; i < 120; i++) {
		for (int j = i + 1; j < 121; j++) {
			if (prime[i-1] == 0 && prime[j-1] == 0) {
				year.push_back((i) * (j));
				break;
			}
		}
	}
	int c_year; cin >> c_year;
	for (int i = 1; i < (int)year.size(); i++) {
		if (year[i - 1] > c_year) {
			cout << year[i - 1];
			break;
		}
	}
}
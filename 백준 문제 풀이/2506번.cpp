#include<iostream>
using namespace std;
int main() {
	int N; cin >> N;
	int num = 1, sum = 0;
	for (int i = 0; i < N; i++) {
		int OX; cin >> OX;
		if (OX == 1) {
			sum += num;
			num += 1;
		}
		else
			num =1;
	}
	cout << sum;
}
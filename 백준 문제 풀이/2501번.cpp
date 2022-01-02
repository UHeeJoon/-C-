#include<iostream>
using namespace std;
int main() {
	int N, K, count = 0; cin >> N >> K;
	int d = 0;
	for (int i = 1; i <= N; i++) {
		if (N % i == 0) {
			count = count + 1;
			if (count == K) 
				d = i;
		}
	}
	cout << d << "\n";
}
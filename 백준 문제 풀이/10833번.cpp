#include<iostream>
using namespace std;
int main() {
	int N, sum = 0; cin >> N;
	for (int i = 0; i < N; i++) {
		int school, apple;
		cin >> school >> apple;
		sum += apple % school;
	}
	cout << sum;
}
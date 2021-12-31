
#include<iostream>
#include<vector>
using namespace std;
int main() {
	int N, K;
	cin >> N >> K;
	vector <int> yose;
	for (int i = 1; i <= N; i++)  yose.push_back(i);
	int temp = K;
	cout << "<";
	while ((int)yose.size() != 1) {
		cout << yose[temp - 1] << ", ";
		yose.erase(yose.begin() + temp - 1);
		temp = temp + K - 1;
		if (temp > (int)yose.size()) {
			temp = temp - (int)yose.size();
		}
		if ((int)yose.size() < K) {
			if (temp == K)
				temp = K % (int)yose.size();
			else {
				temp = K - (K - temp);
				if (temp > (int)yose.size())
					temp = temp % (int)yose.size();
			}
		}
		if (temp == 0) temp = 1;
	}
	cout << yose[0] << ">";
}

/*
#include <iostream>
#include <queue>
using namespace std;

int main() {
	int N, K;
	cin >> N >> K;
	queue<int> circle;
	for (int i = 0; i < N; i++) {
		circle.push(i + 1);
	}
	cout << "<";
	while (circle.size() - 1) {
		for (int i = 0; i < K - 1; i++) {
			circle.push(circle.front());
			circle.pop();
		}
		cout << circle.front() << ", ";
		circle.pop();
	}
	cout << circle.front() << ">";
	return 0;
}
*/
#include<iostream>
using namespace std;
int main() {
	int sum, game;
	for (int i = 0; i < 3; i++) {
		sum = 0;
		for (int j = 0; j < 4; j++) {
			cin >> game;
			sum += game;
		}	
		sum = sum != 4 ? 3 - sum : sum = 4;
		cout << (char)('A' + sum) << "\n";
	}
}
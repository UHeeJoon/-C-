#include<iostream>
using namespace std;
int price[11];
int add() {
	int sum = 0;
	for (int i = 1; i < 10; i++) 
		sum += price[i];
	return price[0] - sum;
}
int main() {
	for (int i = 0; i < 10; i++) 
		cin >> price[i];
	cout << add();
}
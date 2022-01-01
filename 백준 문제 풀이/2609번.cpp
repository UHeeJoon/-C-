#include<iostream>
using namespace std;
int Gcd(int num, int num2) {
	if (num2 == 0) 
		return num;
	else 
		return Gcd(num2, num % num2);
}
int main() {
	int num, num2; cin >> num >> num2;
	int gcd = Gcd(num, num2);
	cout << gcd << "\n" << (num * num2) / gcd;
}
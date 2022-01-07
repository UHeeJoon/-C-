#include<iostream>
using namespace std;
int main() {
	int num, sum, One, Try = 0, new_num;
	cin >> num;
	new_num = num;
	do {
		sum = (new_num / 10 + new_num % 10) % 10;
		One = new_num % 10;
		new_num = One * 10 + sum;
		Try += 1;
	} while (new_num != num);
	cout << Try;
	return 0;
}
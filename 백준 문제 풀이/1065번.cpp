#include<iostream>
using namespace std;
int strange_num(int a) {
	int num = a, i = 0, number[4] = { 0 }, count = 0;
	while (num > 0) {
		number[i] = num % 10;
		num /= 10;
		i++;
	}
	if (i < 3)
		return 1;
	else if (i == 3) {
		if ((number[1] - number[0]) == (number[2] - number[1]))
			return 1;
		else return 0;
	}
	else {
		if (number[1] - number[0] == number[2] - number[1] &&
			number[2] - number[1] == number[3] - number[2])
			return 1;
		else return 0;
	}
}
int main() {
	int stack = 0, num;
	cin >> num;
	for (int i = 1; i <= num; i++) {
		if (strange_num(i) == 1)
			stack++;
		else;
	}
	cout << stack;
}
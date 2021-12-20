/*
#include<iostream>
#include<cmath>
#include<string>
using namespace std;
#define SIZE 10
int main() {
	string color[SIZE] = { "black","brown", "red", "orange", "yellow", "green", "blue", "violet", "grey", "white" };
	string reg1, reg2, mul, result = "";
	cin >> reg1 >> reg2 >> mul;
	for (int i = 0; i < SIZE; i++) {
		if (color[i] == reg1)
			reg1 = to_string(i);
		if (color[i] == reg2)
			reg2 = to_string(i);
		if (color[i] == mul)
			mul = to_string((int)pow(10, i)).substr(1);
	}
	result = (reg1 == "0" ? reg2 + mul : reg1 + reg2 + mul);
	cout << stoll( result);
}
*/

#include<iostream>
#include<cmath>
#include<string>
using namespace std;
int main() {
	string color[10] = { "black","brown", "red", "orange", "yellow", "green", "blue", "violet", "grey", "white" };
	string reg, result = "";
	for (int i = 0; i < 3; i++) {
		cin >> reg;
		for (int j = 0; j < 10; j++) {
			if (i == 2 && reg == color[j]) {
				result += to_string((int)pow(10, j)).substr(1);
				break;
			}
			else if (i != 2 && reg == color[j]) {
				result += to_string(j);
				break;
			}
		}
	}
	cout << stoll(result);
}

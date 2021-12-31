#include<iostream>
#include<string>
using namespace std;
int main() {
	string c_t, s_t;
	cin >> c_t >> s_t;
	int c_time[3] = { stoi(c_t.substr(0,2)),stoi(c_t.substr(3,5)),stoi(c_t.substr(6,8)) };
	int s_time[3] = { stoi(s_t.substr(0,2)),stoi(s_t.substr(3,5)),stoi(s_t.substr(6,8)) };
	int new_time[3];
	int discount = 0;
	for (int i = 2; i >= 0; i--) {
		int hour = i == 0 ? 24 : 60;
		if (c_time[i] > s_time[i]) {
			new_time[i] = hour + s_time[i] - c_time[i] + discount;
			if (new_time[i] == -1)
				new_time[i] = hour - 1;
			discount = -1;
		}
		else {
			new_time[i] = s_time[i] - c_time[i] + discount;
			if (new_time[i] == -1) {
				new_time[i] = hour - 1;
				discount = -1;
			}
			else
				discount = 0;
		}
	}
	printf("%02d:%02d:%02d\n", new_time[0], new_time[1], new_time[2]);
}
/*
int a, b, c, d, e, f;
scanf_s("%d:%d:%d", &a, &b, &c);
scanf_s("%d:%d:%d", &d, &e, &f);
d -= a; e -= b; f -= c;
if (f < 0) {
	f += 60; e--;
}
if (e < 0) {
	e += 60; d--;
}
if (d < 0)d += 24; printf("%02d:%02d:%02d", d, e, f);
*/
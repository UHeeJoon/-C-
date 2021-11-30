#include<iostream>
using namespace std;
int main() {
	int a; cin >> a;
	int k = 1, num = 1, i = 1, j = 1, count = 0;
	while (1) {
		if (k < 0) {
			for (i = 1, j = num; i < num + 1; i -= k, j += k) {
				count++;
				if (count == a)
					break;
			}
			k *= -1, num++;
		}
		else {
			for (i = num, j = 1; j < num + 1; i -= k, j += k) {
				count++;
				if (count == a)
					break;
			}
			k *= -1, num++;
		}
		if (count == a)
			break;
	}
	cout << i << "/" << j;
}

/*
 #include <iostream>
using namespace std;

int main() {
	int N;
	cin >> N;

	int i = 1;
	while (N > i) {
		N -= i;
		i++;
	}

	if (i % 2 == 1)
		cout << i + 1 - N << '/' << N << endl;
	else
		cout << N << '/' << i + 1 - N << endl;
}
*/
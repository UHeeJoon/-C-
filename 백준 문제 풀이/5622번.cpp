
/* 틀린 코드
#include<iostream>
using namespace std;
int main() {
	char a[16] = { 0 };
	cin >> a;
	int b[26] = { 0 }, length = 0, move = 2;
	for (int i = 1; i < 27; i++) {
		if (i < 18) {
			if (i % 3 == 1)
				move++;
			b[i - 1] = move;
		}
		else if (i < 23) {
			if (i % 3 == 2)
				move++;
			b[i - 1] = move;
		}
		else {
			if (i == 23)
				move++;
			b[i - 1] = move;
		}
	}
	for (int i = 1; a[i - 1] != NULL; i++) {
		for (int j = 1; j < 27; j++)
			if ((int)a[i - 1] - 64 == j) {
				length += b[j];
				break;
			}
	}
	cout << length;
}
*/

#include<iostream>
using namespace std;
int main() {
	char a[16] = { 0 };
	cin >> a;
	int b[26] = { 0 }, length = 0, move = 2;
	for (int i = 1; i < 27; i++) {
		if (i < 18) {
			if (i % 3 == 1)
				move++;
			b[i - 1] = move;
		}
		else if (i < 23) {
			if (i % 3 == 2)
				move++;
			b[i - 1] = move;
		}
		else {
			if (i == 23)
				move++;
			b[i - 1] = move;
		}
	}
	for (int i = 1; a[i - 1] != NULL; i++) {
		for (int j = 1; j < 27; j++)
			if ((int)a[i - 1] - 64 == j) {
				length += b[j - 1];
				break;
			}
	}
	cout << length;
}
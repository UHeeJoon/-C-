#include<iostream>
#include<cmath>
using namespace std;
int main() {
	int a; // �ݺ� Ƚ�� a
	long long int x, y;	// ���� ��ġ x / ��ǥ��ġ y
	cin >> a;
	for (int i = 0; i < a; i++) {
		cin >> x >> y;

		long long int d = (long long int)sqrt(y - x);
		// ��Ģ���� �ǰ� 

		if (sqrt(y - x) > d + 0.5) 
			// ��Ģ���� �ǰ�
			d += 1;

		if (d * d < (y - x))
			cout << d + d << "\n";
		else
			cout << d + d - 1 << "\n";
	}
}
/*
#include <iostream>
#include <cmath>
using namespace std;

int main(void) {
	int T; cin >> T;
	for (int t = 0; t < T; t++) {
		int x, y; 
		cin >> x >> y;

		int n = sqrt(y - x);
		int rest = (y - x) - n * n;
		int result = n * 2 - 1;

		if (rest == 0) 
			cout << result << endl;

		else if (rest <= n) 
			cout << result + 1 << endl;

		else 
			cout << result + 2 << endl;
	}
}
*/
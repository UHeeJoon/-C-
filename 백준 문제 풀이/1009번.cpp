#include<iostream>
#include<cmath>
using namespace std;
int main() {
	int T, a, b;
	// �׽�Ʈ ���̽� T / �� a / ���� b
	cin >> T;
	for (int i = 0; i < T; i++) {
		cin >> a >> b;
		if (a %10 == 0)
			// 10�� ������
			cout << 10 << "\n";
		else if(b % 4 == 0)
			// a�� 0 ������ �Ǵ°��� ���
			cout << (int)pow(a, 4) % 10 << "\n";
		else
			cout << (int)pow(a, b % 4 ) % 10 << "\n";
		// 1�� �ڸ� ���� 4��°���� ���� �� �ݺ��ǹǷ� ���
	}
}
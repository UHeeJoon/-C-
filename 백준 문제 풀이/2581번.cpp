#include<iostream>
using namespace std;
int main() {
	int m, n; cin >> m >> n;
	int sum = 0, min = n;
	// �Ҽ����� �� sum / �Ҽ����� �ּҰ� min
	for (int i = m; i <= n; i++) { // M�̻� N������ �ڿ���
		
		bool num = false; // �Ҽ����� �Ǻ��� num

		for (int j = 2; j < (i / 2 + 2); j++) {	// i�� 2�� ���� ���� i/2+2 ���

			// 2�� ��
			if (i == 2) { 
				num = true; 
				break;
			}

			// 2�� �����ϰ�
			else {
				if (i % j == 0) {	// �Ҽ��� �ƴϸ�
					num = false;	// flase
					break;
				}
				else num = true;	// �Ҽ��� true
			}

		}
		if (num) {	// �Ҽ��̸�
			
			sum += i;	// sum�� ���Ѵ�	

			if (i < min)	// �ּҰ� �Ǻ�
				min = i;
		}
	}
	sum != 0 ? cout << sum << "\n" << min : cout << -1;
	// �Ҽ��� �־����� sum�� min�� ���/ �������� -1���
}
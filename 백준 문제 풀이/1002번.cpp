#include<iostream>
#include<cmath>
using namespace std;
int main() {
	int x1, x2, y1, y2, r1, r2;
	// �������� ��ǥ (x1, y1)�� ���ȯ�� ��ǥ (x2, y2)
	// �������� ����� �������� �Ÿ� r1�� ���ȯ�� ����� �������� �Ÿ� r2
	int T;
	// �Է� ���̽�
	cin >> T;
	for (int i = 0; i < T; i++) {
		int target;
		// ������� ���� �� �ִ� ��ġ
		cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2;
		int temp = r1; 
		r1 > r2 ? r1 = r1 : (r1 = r2, r2 = temp);
		// r1�� ū�� ����
		double d = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
		// �� �������� �Ÿ� d

		if (d== 0 && r1 ==r2)
			target = -1;
		// ���� ��ġ�� ��

		else if (r1 + r2 == d || r1 - r2 == d )
			target = 1;
		// ���� �Ǵ� �������� ��

		else if (r1 - r2 < d && d < r1 + r2)
			target = 2;
		// �� ������ ���� ��

		else target = 0;
		// ������ ���� ��
		cout << target << endl;
	}
}
/*
#include<iostream>
using namespace std;
int main() {
	int n, b = 3, c = 5;
	// ����� ���� n / 3Ű�� ���� b/ 5Ű�� ���� c
	cin >> n;
	int i = 0, j = 0, count = 2000;
	// 3Ű�� ���� i / 5Ű�� ���� j/ ���� ���� Ƚ���� ���� count
	while (1) {
		if (b * i + c * j == n) {	// 3Ű�ο� 5Ű�� ���� ����� ���԰� ������

			if (count > i + j)	// ������ ������ ���� count���� ������
				count = i + j;	// count�� ������ ������ �� ����

			i++, j = 0;	// 3Ű�� ���� ����, 5Ű�� 0���� �ʱ�ȭ
		}
		else if (b * i + c * j > n) { // 3Ű�ο� 5Ű�� ���� ����� ���Ժ��� ũ��
			i++, j = 0;	// 3Ű�� ���� ���� / 5Ű�� 0���� �ʱ�ȭ
		}
		else
			j++;	// �ƹ��͵� �ش����� ���� �� 5Ű�� ���� ����

		if (b * i >= n)	// 3Ű���� �� ���԰� ����� ���Ժ��� ũ��
			break;
	}
	count == 2000 ? cout << -1 : cout << count;
}
*/

#include <iostream>
using namespace std;
int main() {
	int n; cin >> n;
	int isResult = -1;
	int max = n / 5;
	for (int i = max; i >= 0; --i) {
		int calc = n - (i * 5);
		if ((calc % 3) == 0) {
			isResult = i + (calc / 3);
			break;
		}
	}
	cout << isResult;
}

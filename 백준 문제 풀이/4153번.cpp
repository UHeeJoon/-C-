#include<iostream>
using namespace std;
int main() {
	int w, h, hypo;
	// �غ� w / ���� h / ���� hypo 
	while (1) { // ���� ����
		cin >> w >> h >> hypo;
		if (w + h + hypo == 0) break;
		// 3�Է��� 0�̸� while�� ����
		int temp = hypo;
		// ���� ���� temp

		// ---------������ ã�� ���� ���ǹ�
		if (w > h) {
			hypo > w ? hypo : (hypo = w, w = temp);
			// ���� ū ���� hypo�� �� ����
		}
		else {
			hypo > h ? hypo = hypo : (hypo = h, h = temp);
			// ���� ū ���� hypo�� �� ����
		}
		// ------------------------
		if ((w * w + h * h) == hypo * hypo)
			// ��Ÿ�ڶ��� ���� Ȱ��
			cout << "right" << endl;
		else
			cout << "wrong" << endl;
	}
}
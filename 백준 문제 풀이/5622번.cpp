
/* Ʋ�� �ڵ�
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
	char a[16] = { 0 };		// �־��� �ܾ��� ����15 ���� ũ�� 1 �߰� ����	/ �Է¹޴� ���ڿ� a�迭
	cin >> a;
	int b[26] = { 0 }, length = 0, move = 2;		// ���ĺ� ���� b�迭/ �ּ� �ð� length/ ���ĺ��� �̵� �Ÿ� move -- 1�� �Ŵµ� �ʿ��� �ð� 2�� ���� move=2
	for (int i = 1; i < 27; i++) {			// ���� == ���ĺ� -- ���ĺ� �迭�� 0���� �����̱⿡ 1 ���ؼ� 1���� 27����	
		if (i < 18) {	// ���ĺ� 3���� �ִ� ������ + 7���� ���ĺ� 2�� -- ����� ���Ǽ��� ���� �߰�
			if (i % 3 == 1)	// 6������ ���ĺ� 3�������� �̵� �Ÿ� ���� 
				move++;
			b[i - 1] = move;	// �ش� ���ĺ��� �̵� �Ÿ� ����
		}
		else if (i < 23) {		// 23��° ������ 4, 3 ���� �����ϴµ� ��������� ���� ����
			if (i % 3 == 2)
				move++;
			b[i - 1] = move;	// �ش� ���ĺ��� �̵� �Ÿ� ����
		}
		else {
			if (i == 23)	// 9���� �ִ� ��� ���ĺ�
				move++;			//
			b[i - 1] = move;	// �ش� ���ĺ��� �̵� �Ÿ� ����
		}
	}
	for (int i = 0; a[i] != NULL; i++) {	// �Է¹��� a�迭�� ������� ���ö����� ����
		for (int j = 0; j < 26; j++)		// ���ĺ� 26��
			if (a[i] - 'A' == j) {		// �ƽ�Ű �ڵ�� ���
				length += b[j];		// ���ĺ� �迭�� ����ִ� �� ���ĺ��� �̵� �Ÿ� + length
				break;		// ã���� ���� ���ĺ����� �Ѿ
			}
	}
	cout << length;
}
#include<iostream>
using namespace std;
int main() {
	char S[101] = { 0 };		 // ���ǿ� �ܾ��� ���̴� 100�̴� ������ ����� 1������ �ְ� 101����
	int alpha[26] = { 0 };		// ���ĺ��� ���ϴ� ���̴� 26���� �迭 ����
	cin >> S;					// ���ĺ� �Է�
	for (int i = 0; i < 26; i++) {			
		for (int k = 0; k < 100; k++) {
			if (S[k] == char(i + 97)) {			// 97�� �ƽ�Ű �ڵ�� 'a'
				alpha[i] = k;					// ���ĺ��� ��ġ�ϸ� �ش���ġ�� ���ĺ��� ���� ��ġ �Է�
				break;
			}
			else alpha[i] = -1;					// �ش� ������ ������ -1 ����
		}
	}
	for (int i = 0; i < 26; i++)
		cout << alpha[i] << " ";
}
#include<iostream>
using namespace std;
int main() {
	char a[1000001] = { 0 };	// �ܾ��� ���� 1,000,000
	int alpha[26] = { 0 };		// ���ĺ��� ���� �迭
	cin >> a;
	for (int i = 0; a[i] != NULL; i++) {	// �ܾ ���� ���� �� ���� ����
		for (int k = 0; k < 26; k++) {
			if (a[i] == char(65 + k) || a[i] == char(97 + k))	// �� �ҹ��� ���� ���� ������ �ش� ��ġ�� +1	65 == A, 97==a
				alpha[k]++;
		}
	}
	int max = 0, count = 0, alphabet = 0;
	for (int i = 0; i < 26; i++) {
		if (alpha[i] > max)				// ���� ���� ���� ���ĺ� ����
			max = alpha[i];
	}
	for (int i = 0; i < 26; i++)
		if (max == alpha[i]) {
			count++;					// ���� ���� ���� ���ĺ��� �������� count +1
			alphabet = i;
		}
	if (count > 1)
		cout << "?";					// ���� ���� ���� ���ĺ��� �������̸� ? ���
	else
		cout << char(65 + alphabet);	// �ϳ��� �ش� ���ĺ� ���			65�� A �� �빮�ڷ� ���
}
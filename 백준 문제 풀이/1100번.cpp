#include<iostream>
using namespace std;
#define SIZE 8
// ü������ ũ�� 8
int main() {
	char chess[SIZE][SIZE] = { "" };
	// 2���� �迭 == ü����
	int count = 0;
	// �Ͼ�ĭ ���� ���� �� count
	for (int i = 0; i < SIZE; i++) {
		for (int j = 0; j < SIZE; j++) {
			cin >> chess[i][j];
			// ü���� ���� ����
			if (i % 2 == 0 && j%2==0) {
				// 0,0���� �Ͼ� ĭ, �� �ķ� ¦���� ° ��� ������ �Ͼ�ĭ
				chess[i][j] == 'F' ? count++ : count;
				// ���� ������ count++ 
			}
			else if (i % 2 == 1 && j % 2 == 1) {
				// 0,1���� �Ͼ� ĭ, �� �ķ� Ȧ���� ° ��� ������ �Ͼ�ĭ
				chess[i][j] == 'F' ? count++ : count;
				// ���� ������ count++ 
			}
		}
	}
	cout << count;
}
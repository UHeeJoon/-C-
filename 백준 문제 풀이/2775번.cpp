
#include<iostream>
using namespace std;
int main() {
	int t, k, n; cin >> t;
	// �Է� Ƚ�� t/ �� k/ ȣ n
	int A[15][14] = { 0 };	// 1 �� k, n �� 14
	for (int i = 0; i < 15; i++)
		A[0][i] = i + 1;	// 0���� 1 ~ 14 ���� �������
	for (int i = 0; i < 14; i++) {	// 2���� �迭 �� ����
		for (int j = 0; j < 14; j++) { // 2���� �迭 �� ����
			int d = 0;
			for (int k = 0; k <= j; k++) {	
				d += A[i][k];	// ������ �� ȣ���� �ش��ϴ� �� d�� +
			}
			A[i + 1][j] = d;	// ������ d�� �ٷ� ������ �ʿ��� ��
		}
	}
	for (int i = 0; i < t; i++) {
		cin >> k >> n;
		cout << A[k][n - 1] << "\n";
	}
}

/*
#include <stdio.h>
#include <iostream>
#include <string>

using namespace std;

int room(int a, int b) {

	if (a == 0) {
		cout << b << endl; 
		return b; } // �� ���� 0�� ���� �ش� ȣ���� return
	if (b == 1) {
		cout << b << endl;
		return 1;
	} // ȣ ���� 1�� ���� ������ 1 return

	// �ش� ȣ���� ���� �� �� ȣ�� + �ش� ȣ���� �ؿ� �� ȣ�� �� ���� ��
	// ��� �Լ� ȣ��
	
	return (room(a - 1, b) + room(a, b - 1));

}

int main() {
	int t;
	cin >> t;
	int k, n;
	for (int i = 0; i < t; i++) {
		cin >> k >> n;
		cout << room(k, n) << endl;
	}
}
*/
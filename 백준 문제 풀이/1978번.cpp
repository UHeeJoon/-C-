#include<iostream>
using namespace std;
int main() {
	int n[100] = { 0 };
	// �־���� ���� 100 n[100]

	int b; cin >> b; 
	// �Է� Ƚ�� b

	int count = 0;
	// �Ҽ��� �ƴ� ���� ���� �� count
	for (int i = 0; i < b; i++) {
		cin >> n[i];	//���� �Է�

		if (n[i] == 1)	// 1�� ����
			count++;

		for (int j = 2; j <= n[i] / 2; j++) {
			// 2 �����ϱ� ���ؼ�  n[i] / 2 ���
			if (n[i] % j == 0) {
				// �Ҽ��� �ƴϸ� count++
				count++;
				break;
			}
		}
	}
	cout << b - count; // �� �Է¹��� ���� ���� - �Ҽ��� �ƴ� ���� ����
}
/*
// �����佺�׳׽��� ü Ȱ��
#include <iostream>
#include <cmath>
using namespace std;
int N;
bool isPrime(int x) {
	if (x == 1) return false;
	else if (x == 2) return true;
	else {
		for (int i = 2; i <= sqrt(x); i++) {
			for (int j = i + i; j <= x; j += i) {
				if (j == x) return false;
			}
		}
		return true;
	}
}

int main(void) {
	cin >> N;
	int cnt = 0;
	for (int i = 0; i < N; i++) {
		int input;
		cin >> input;
		if (isPrime(input)) cnt++;
	}
	cout << cnt << endl;
}
*/
#include<iostream>
using namespace std;
int main() {
	int N; cin >> N;		// �ܾ �Է¹��� Ƚ�� N
	char a[101] = { 0 };	// ���ڿ��� ���� a�迭
	int cont[101] = { 0 }, count = 0, num;	// 
	for (int k = 0; k < N; k++) {
		int sum = 0, b = 0;
		cin >> a;
		for (int i = 0; a[i] != NULL; i++) {
			num = (int)a[i], b = 0;
			for (int j = i; a[j] != NULL; j++) {
				if ((int)a[j] == num) {
					cont[j] = b;
					sum += cont[j];
				}
				else
					b = 1;
			}
			if (sum > 0)
				break;
		}
		if (sum == 0)
			count++;
	}
	cout << count;
}
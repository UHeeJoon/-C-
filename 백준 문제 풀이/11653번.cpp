#include<iostream>
using namespace std;
int main() {
	int n; cin >> n;
	// �Է¹޴� �� n
	int i = 2;
	// �μ� i
	while (1) {
		if (n == 1) break;
		// 1�ϵ� �� == ���μ����ذ� ������

		if (n % i == 0) {	// i�� ���� ��������
			n /= i;
			// �Է� ���� n�� i�� ���� �� n�� �� �Ҵ�
			cout << i << "\n";
		}
		else i++;
		// �μ� i�� ���̻� �ȳ������� 1�����ؼ� ���
	}
}
/*
#include <iostream>
using namespace std;

int main() {
	int N;
	cin >> N;

	if (N == 1) return 0;

	for (int i = 2; i <= N; i++) {
		while (N % i == 0) {
			cout << i << endl;
			N /= i;
		}
	}

}
*/
#include<iostream>
using namespace std;
int main() {
	int T, N, M;
	// �½�Ʈ ���̽� T / ���� �ٸ� N  /���� �ٸ� M
	cin >> T;
	for (int i = 0; i < T; i++) {
		double sum = 1, sum2 = 1;
		// ������ ���տ� ����� sum, sum2
		cin >> N >> M;
		// ------------------------------------
		// nCr ���� ��� ���丮�� ����� ��
		for (int j = N + 1; j < M + 1; j++) {
			// n! / r! �κ�
				sum = sum * j;
		}
		for (int j = 2; j < M - N + 1; j++) {
			// (n - r)! �κ�
				sum2 = sum2 * j;
		}
		// ---------------------------------------
		printf("%0.0f\n", sum/sum2);	
		// ���� ǥ�����Ÿ� ���� %0.0f / sum/sum2 == (n!) / r! * (n-r)!
	}
}
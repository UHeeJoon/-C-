#include<iostream>
#include<cmath>
using namespace std;

int prime[1000000];
// 1000000 ������ ���� �Ǻ��� prime�迭 
int main() {
	int M, N;
	// �ڿ��� M, N
	cin >> M >> N;

	prime[0] = 1;
	// 1��ġ�� �ش��ϴ� �迭 1�� �ʱ�ȭ

	for (int i = 2; i <= sqrt(N); i++) {
		for (int j = i + i; j <= N; j += i) {
			// �����佺�׳׽��� ü Ȱ��

			if (prime[j - 1] == 0)
				// �ð��� �����̶� �� �ٿ��ֱ� ���� ���ǹ� �߰�

				prime[j - 1] = 1; // �Ҽ��� �ƴ� �� 1�� �ʱ�ȭ
		}
	}
	for (int i = M; i <= N; i++) {
		if(prime[i - 1]==0)
			printf("%d\n", i);
	}
}

/*
#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

int main() {

	// int �ϸ� ���� �ʹ� Ŀ���� bool�� �ϰ� true, false �־��� ��ũ!
	bool a[1000001];
	int N, K;
	cin >> N >> K;

	a[0] = false;
	a[1] = false;
	//��� Ʋ�ȴ� ����.  i�� N���� �ߴ�. ���� 1���͸� 1�� �ٽ� true������� ��
	for (int i = 2; i <= K; i++) {
		a[i] = true;
	}

	for (int i = 2; i <= sqrt(K); i++) {
		if (a[i]) {
			for (int j = i * i; j <= K; j += i) {
				a[j] = false;
			}

		}
	}
	for (int k = N; k <= K; k++) {
		if (a[k]) { // if�� ���̸� 
			printf("%d\n", k);
		}
	}
}
*/
/*
#include <iostream>
#include <cmath>

using namespace std;

int main() {
	int M, N, root;
	cin >> M >> N;
	for (int i = M; i <= N; i++) {
		root = sqrt(i);
		if (root == 1 && i != 1) {
			cout << i << '\n';
			continue;
		}
		if (i % 2) {
			for (int j = 2; j <= root; j++) {
				if (!(i % j))
					break;
				if (j == root) {
					printf("%d\n", i);
				}
			}
		}
	}
}
*/
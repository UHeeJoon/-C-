
#include<iostream>
#include<cmath>

using namespace std;
#define MAX 123456 * 2
// �־����� ���� 123456�� 2�踦 �ִ밪 ����
int prime[MAX + 1];
// ���� ������ ���� 1�� ���� �� ����
int main() {
	int n;
	// �ڿ��� n

	prime[0] = 1;
	// �迭 ù�� ° == 1�� 1�� �ʱ�ȭ

	// ------------------------------
	// �����佺 �׳׽��� ü�� Ȱ���ؼ� �Ҽ��� �ƴ� ���� 1�� ����
	for (int i = 2; i <= sqrt(MAX); i++) {
		for (int j = i + i; j <= MAX; j += i) {
			if (prime[j - 1] != 1)
				// �ӵ��� �����̶� �÷��ֱ� ���� if��
				prime[j - 1] = 1;
		}
	}
	// ----------------------------- 

	while (1) {	// output�κ�
		cin >> n;
		int pr = 0;	// �Ҽ��� ������ ���� pr

		if (n == 0) break;	// 0�̸� ���� 

		for (int i = n +1; i <= n * 2; i++) {	
			// n���� ũ��, 2n���� �۰ų� ����

			if (prime[i - 1] != 1) // 1�� �ƴϸ� �� �Ҽ��̸� pr����
				pr++;
		}
		cout << pr << endl;
	}
}

/*
// �ٸ���� Ǯ��
#include <iostream>
#include <cmath> 
#include <cstdio>

using namespace std;

int main() {
	long long n, test, i, j;
	long long cnt = 0;

	while (1) {
		cnt = 0;
		cin >> n;

		//0�� �Էµ� ������ �ݺ�
		if (n == 0) break;

		//1�� ��� 1���
		else if (n == 1) cout << "1" << "\n";

		else {
			for (int i = n + 1; i <= 2 * n; i++) {

				//¦���� �Ҽ��� �ƴϹǷ� �ѹ� �ɷ��ֱ�
				if (i % 2 != 0) {

					//j+=2 �����ϱ�
					//�����佺�׳׽��� �Ҽ� �ʿ� ������ǻ��
					for (int j = 3; j <= sqrt(i); j += 2) {

						// 2���� ũ�鼭 �ڱ� �ڽ��� �����ٱ����� ���� ���������� �ʴ� ���� �Ҽ�
						if (i % j == 0) {
							cnt--;
							break;
						}
					}
					cnt++;
				}

			}
			cout << cnt << "\n";
		}

	}

}
*/

/*	�ð� �ʰ�
// Ʋ�� �ڵ�
#include<iostream>
#include<cmath>
using namespace std;
int main() {
	int n;
	while (1) {
		int prime = 0;
		cin >> n;
		if (n == 0)
			break;
		else {
			for (int i = n + 1; i <= n + n; i++) {
				for (int j = 2; j <= sqrt(i); j++) {
					if (i % j == 0) {
						prime += 1;
						break;
					}
				}
			}
		}
		prime = n - prime;
		cout << prime << endl;
	}
}
*/
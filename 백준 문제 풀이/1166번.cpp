// ���ذ�
/*
#include<iostream>
using namespace std;
int main() {
	double N, L, W, H;
	cin >> N >> L >> W >> H;
	cout.precision(15);
	double left = 0, right = 1000000000, mid;
	for (int i = 0; i < 10000; i++) {
		mid = (left+ right) / 2;
		if (((long long)(L / mid) * (long long)(W / mid) * (long long)(H / mid)) < N)
			right = mid;
		else
			left = mid;
	}
	printf("%.10lf", left);
}
*/
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	long long int N, L, W, H; //N�� ����, L�� W�� H�� ������ü ���Ǳ���
	double start = 0; //Ž�� ����
	double stop; //Ž�� ��

	scanf_s("%lld %lld %lld %lld", &N, &L, &W, &H);
	stop = (double)max(L, max(W, H)); //����, ����, ���� �߿��� ���� �� ���� ���̸� Ž�� ������ ��´�.

	//10000���� 2�����ϸ� start�� stop�� ���̰� ������ ������ �۾�����. ��������� stop - start�� 1e-10���� �۾�����.
	//start <= stop && stop - start > 1e-10�� �Ұ����ϴ�. stop - start�� ��� 1e-10���� ũ�� ������ �� �ֱ� �����̴�.
	for (int i = 0; i < 10000; i++) {
		long double mid = (start + stop) / 2; //���� Ž���Ϸ��� A�� ���̸� ����
		if (((long long)(L / mid)) * ((long long)(W / mid)) * ((long long)(H / mid)) >= N) { //������ ���� �� �ִٸ�
			start = mid; //������ mid�� ����
		}
		else { //���ڿ� ���� �� ���ٸ�
			stop = mid; //���� mid�� ����
		}
	}

	printf("%.10lf", stop); //����� start�� stop �� ���� �ϳ��� �ƹ��ų� ����ص� �ȴ�. ���̰� 1e-10���� �۱� �����̴�.
}
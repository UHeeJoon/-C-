#include<iostream>
using namespace std;
#define PI 3.14159265359
int main() {
	// --- �Ҽ��� 6��° �ڸ����� ����
	cout << fixed;
	cout.precision(6);
	// -----------------------------

	double R; // ������
	cin >> R;

	cout << PI * R * R << endl;
	// ��Ŭ���� ������ ���� ���� ����
	
	cout << 2 * R * R << endl;
	// �ý� ������ ���� ���� ����
}
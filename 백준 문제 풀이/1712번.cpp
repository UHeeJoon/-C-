#include<iostream>
using namespace std;
int main() {
	int a, b, c;	// ������� a, �ΰǺ� ���� b, �ǸŰ��� c
	cin >> a >> b >> c;
	if (b >= c)		// �ΰǺ�� ���� ���� b�� �Ǹ��ϴ� ���ݺ��� ũ�� -1 ���
		cout << -1;
	else
		cout << a / (c - b) + 1;	// ������� / (�ǸŰ��� - �ΰǺ� ����) ������� �ϸ� �������� �Ǹ� ������ �������� �����̹Ƿ� + 1
}
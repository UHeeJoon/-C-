#include<iostream>
#include<string>
using namespace std;
int main() {
	string str;
	// �Է¹��� ���ڿ� str
	cin >> str;
	for (int i = 0; i < (int)str.length(); i++) {
		// ���ڿ��� ���̸�ŭ �ݺ�
		if (i % 10 == 0 && i != 0) cout << endl;
		// 10�� ° ���� ���� �ѱ�
		cout << str[i];
	}
}
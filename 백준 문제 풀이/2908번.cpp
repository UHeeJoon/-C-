/*
#include<iostream>
#include<string>
using namespace std;
int main() {
	string a, b; int c = 0, d = 0;
	cin >> a >> b;				// ���ڿ� �Է¹���
	for (int i = 0, j = 1; i < a.length(); i++, j *= 10) {		// ���ڿ��� ���̸�ŭ �ݺ�
		c += ((int)a[i] - 48) * j;								// ���� �ڸ��� *1, �����ڸ� *10, �����ڸ� *100 �ؼ� c�� ����
	}
	for (int i = 0, j = 1; i < b.length(); i++, j *= 10) {
		d += ((int)b[i] - 48) * j;			// ���� �ڸ��� *1, �����ڸ� *10, ���� �ڸ� *100 �ؼ� d�� ����
	} 
	c > d ? cout << c : cout << d;		// c�� d���� ũ�� c��� �ƴϸ� d���
}
*/

#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main() {
	string num1, num2, result;
	cin >> num1 >> num2;
	for (int i = num1.length() - 1; i >= 0; i--) { // 1�� �ڸ��� ���� �� ū���� �Ǻ�
		if (num1[i] > num2[i]){					   // ���� �� ū ���� result�� ���� �� for�� ����
			result = num1; break;
	}
		else if (num1[i] < num2[i]) {
			result = num2; break;
		}
	}
	reverse(result.begin(), result.end());		   // result�� �������� ��ȯ
	for (char i : result)cout << i;					// foreach������ ���
}
/*
#include<iostream>
#include<cmath>
#include<string>
using namespace std;
#define SIZE 10
// ���� ���� �迭�� ũ��
int main() {
	string color[SIZE] = { "black","brown", "red", "orange", "yellow", "green", "blue", "violet", "grey", "white" };
	// ������ �� color�迭
	string reg1, reg2, mul, result = "";
	// ���� 1 reg1/ 2 reg2/ 3 mul(���ؾ��ؼ� mul�� ����) / ������� ���� result
	cin >> reg1 >> reg2 >> mul;
	for (int i = 0; i < SIZE; i++) {
		if (color[i] == reg1)
		// �ش� �迭�� �� ���ڷ� ���� 
			reg1 = to_string(i);
		if (color[i] == reg2)
		// �ش� �迭�� �� ���ڷ� ����
			reg2 = to_string(i);
		if (color[i] == mul)
		// �ش� ���� �� ���ڷ� ���� �� ���� 1 ����
			mul = to_string((int)pow(10, i)).substr(1);
	}
	result = reg1 + reg2 + mul;
	// result�� �ش� ���� ����
	cout << stoll(result);
	// long long Ÿ������ ��ȯ
}
*/

#include<iostream>
#include<cmath>
#include<string>
using namespace std;
int main() {
	string color[10] = { "black","brown", "red", "orange", "yellow", "green", "blue", "violet", "grey", "white" };
	// ���� ���� ���� color�迭
	string reg, result = "";
	// �Է¹��� reg�� / ��� �������� result ���ڰ� Ŀ�� ���ڿ��� �����
	for (int i = 0; i < 3; i++) {
		// 3�� �Է� ����
		cin >> reg;
		for (int j = 0; j < 10; j++) {
			// �Է¹��� reg���� ������ �� ����
			if (i == 2 && reg == color[j]) {
				// ������ ���� ���ؾ��ϴ� ���� - ���� ���
				result += to_string((int)pow(10, j)).substr(1);
				// �����ؼ� ���� ���� ���ڿ��� �ٲٰ� �ٲ㼭 ���� ���ڿ��� �� 1 ����
				break;
			}
			else if (i != 2 && reg == color[j]) {
				// �������� ������
				result += to_string(j);
				// ���ڿ��μ� ���� ex) "1" + "1" = "11"
				break;
			}
		}
	}
	cout << stoll(result);
	// ���ڿ� �״�� ����ϸ� Ʋ���� long long Ÿ������ ��ȯ
}

#include <iostream>
#include <string>
using namespace std;
int main(){
	string str;
	for (int i = 0; i < 100 && !cin.eof(); i++){
		// eof Ȱ�� / c, c++�� eof�� ��ȯ�� �� ���� �Է¹��� ����
		getline(cin, str);
		cout << str << endl;
	}
}
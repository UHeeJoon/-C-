#include<iostream>
using namespace std;
int main() {
	int a, b, c; cin >> a >> b >> c;
	(c - a) % (a - b) != 0 ? cout << (c - a) / (a - b) + 2 : cout << (c - a) / (a - b) + 1;
	// (1). c - a �� ������ ���� �̲������� ������  -a�� �ϰ�  ��� ���� +1
	// (2). a - b �� �Ϸ翡 �̵��� �Ÿ� 
	// (���� a) (c - a) % (a - b) != 0�� /�� ������ ������ ���� ������ ���� 1�� �������� ������ ���
	// (c - a) % (a - b) != 0 ���̸� a���ǿ� ���Ͽ� +1 
}
/*
* #include <iostream>
* using namespace std;
* int main(){
*	int a, b, v;
* cin >> a >> b >> v;
* cout<< (v - b - 1) / (a - b) + 1;
* }
*/
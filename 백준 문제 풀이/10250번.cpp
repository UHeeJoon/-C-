#include<iostream>
using namespace std;
int main() {
	int t, h, w, n;
	// �Է¹޴� Ƚ�� t/ �ǹ� ���� h/ ���� ���� w/ �մ� ���� n
	cin >> t;
	for (int i = 0; i < t; i++) {
		cin >> h >> w >> n;
		int room = 0, count = 0;	// ���ȣ room/ ����Ƚ�� count
		for (int j = 1; j <= w; j++) {	// 1ȣ���� 
			for (int k = 1; k <= h; k++) {	// ������ ���
				count++;
				if (count == n) {// �մ� ������ŭ �����ϸ�
					room = k * 100 + j;	// �� ��ȣ == �� *100 + ��
					break;
				}
			}
			if (count == n)
				break;
		}
		cout << room << "\n";
	}
}
/*
#include <iostream>

using namespace std;

int main() {
	int T;
	cin>>T;
	int H,W,N;
	for(int i=0; i<T; i++){
		cin>>H>>W>>N;
		int H1, W1;
		H1 = N%H;
		W1 = N/H;
		if(H1 > 0)
			W1++;
		else
			H1 = H;
		cout<<H1 * 100 + W1<<'\n';
	}
}
*/
#include<iostream>
#include<string>
using namespace std;
int main() {
	int count; cin >> count;		// Ƚ���� �Է¹޴� count
	int group_count = 0;	// �ߺ��Ǿ��ִ� �׷��� ������ ���� group_count
	string group = "", new_group;	// �Է¹��� group, �Է¹��� �׷쿡�� �ߺ��� ������ new_group
	for (int i = 0; i < count; i++) {
		new_group = "";	// �Ź� �ݺ��Ҷ����� �ʱ�ȭ
		cin >> group;	
		for (int i = 0; i < (int)group.length() - 1; i++) {
			if (group[i] != group[i + 1]) {	// �� �� �ܾ �ٸ���
				new_group += group[i];	// new_group�� ���� �����ν� �ߺ� ����
			}
		}
		new_group += group[group.length() - 1];	// i, i+1 �߿� i�� ���� �Ǳ⶧���� ���� �ܾ� �߰�

		bool dup = false;	// ���Ӱ� �ߺ��� �����ؼ� ���� ���ڿ��� �Ȱ��� �ܾ �ִ��� �Ǵ��� ����
		for (int i = 0; i < (int)new_group.length() - 1; i++) {
			for (int j = i + 1; j < (int)new_group.length(); j++) {
				if (new_group[i] == new_group[j]) {		//  new_group�� �Ȱ��� �ܾ ���������
					group_count += 1;	// �ߺ��� �׷��� ī��Ʈ
					dup = true;	// �ߺ� ���� true
					break;	// �ű⼭ ����
				}
			}
			if (dup)	// �ߺ��̸�
				break;	// �ߺ� �Ǵ� ����
		}
	}
	cout << count - group_count;	// ���� ���ڿ� ���� - �ߺ��� ���ڿ� ����
}


/*
int N; cin >> N;
char a[101] = { 0 };
int cont[101] = { 0 }, count = 0, num;
for (int k = 0; k < N; k++) {
	int sum = 0, b = 0;
	cin >> a;
	for (int i = 0; a[i] != NULL; i++) {
		num = (int)a[i], b = 0;
		for (int j = i; a[j] != NULL; j++) {
			if ((int)a[j] == num) {
				cont[j] = b;
				sum += cont[j];
			}
			else
				b = 1;
		}
		if (sum > 0)
			break;
	}
	if (sum == 0)
		count++;
}
cout << count;
*/
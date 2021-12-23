#include<iostream>
#include<map>
#include<vector>
#include<string>
using namespace std;
int main() {
	map<string, vector<int>> vector_point;
	// �̵��� ���� ��ǥ �Է��� ���� map Ȱ�� key(�̵� ���) -> value(���� �� ��ǥ (y, x))
	// ���ĺ��� x�� ���ڰ� y��
	vector_point["R"] = vector<int>{ 1,0 }; vector_point["L"] = vector<int>{ -1,0 };
	vector_point["B"] = vector<int>{ 0,-1 }; vector_point["T"] = vector<int>{ 0,1 };
	vector_point["RT"] = vector<int>{ 1,1 }; vector_point["LT"] = vector<int>{ -1,1 };
	vector_point["RB"] = vector<int>{ 1,-1 }; vector_point["LB"] = vector<int>{ -1,-1 };
	// �̵� ��ɿ� ���� ��ǥ ���氪 �Է�
	string king, stone; int N;
	// king��ġ ���� king / ���� ��ġ ���� stone / �ݺ� Ƚ�� N
	cin >> king >> stone >> N;
	for (int i = 0; i < N; i++) {
		string move; cin >> move;
		// �̵� ��� move
		char X = (char)vector_point[move][0];
		// X�� �̵��� ũ�� X���� -> ���ĺ� ����
		char Y = (char)vector_point[move][1];
		// Y�� �̵��� ũ�� Y���� -> ���� ����
		if ((king[0] + X >= 'A' && king[0] + X <= 'H') && (king[1] + Y >= '1' && king[1] + Y <= '8')) {
			// king �� 8 * 8 ũ�� ü������ ����� ������
			king[0] += X;
			// king�� X��ǥ �̵�
			king[1] += Y;
			// king�� Y��ǥ �̵�
			if (king == stone) {
				// king�� stone�� ��ġ�� ��ĥ ��
				if ((stone[0] + X >= 'A' && stone[0] + X <= 'H') && (stone[1] + Y >= '1' && stone[1] + Y <= '8')) {
					// stone�� 8 * 8 ũ���� ü������ ����� ������
					stone[0] += X;
					// stone�� X��ǥ �̵�
					stone[1] += Y;
					// stone�� Y��ǥ �̵�
				}
				else {
					// stone�� 8 * 8 ũ���� ü������ �����
					king[0] -= X;
					king[1] -= Y;
					// king�� �̵� ��ȿȭ �� �̵� ��� ��ȿȭ
				}
			}
		}
		else { 
			// king�� 8 * 8 ũ���� ü������ ����� �̵� ��� ��ȿȭ
			continue; 
		}
	}
	cout << king << endl << stone << endl;
	// king�� stone�� ��ġ ���
}
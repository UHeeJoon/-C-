#include<iostream>
#include<map>
#include<vector>
#include<string>
using namespace std;
int main() {
	map<string, vector<int>> vector_point;
	// 이동에 따른 좌표 입력을 위한 map 활용 key(이동 명령) -> value(변경 할 좌표 (y, x))
	// 알파벳이 x축 숫자가 y축
	vector_point["R"] = vector<int>{ 1,0 }; vector_point["L"] = vector<int>{ -1,0 };
	vector_point["B"] = vector<int>{ 0,-1 }; vector_point["T"] = vector<int>{ 0,1 };
	vector_point["RT"] = vector<int>{ 1,1 }; vector_point["LT"] = vector<int>{ -1,1 };
	vector_point["RB"] = vector<int>{ 1,-1 }; vector_point["LB"] = vector<int>{ -1,-1 };
	// 이동 명령에 따른 좌표 변경값 입력
	string king, stone; int N;
	// king위치 받을 king / 돌의 위치 받을 stone / 반복 횟수 N
	cin >> king >> stone >> N;
	for (int i = 0; i < N; i++) {
		string move; cin >> move;
		// 이동 명령 move
		char X = (char)vector_point[move][0];
		// X축 이동할 크기 X변수 -> 알파벳 변경
		char Y = (char)vector_point[move][1];
		// Y축 이동할 크기 Y변수 -> 숫자 변경
		if ((king[0] + X >= 'A' && king[0] + X <= 'H') && (king[1] + Y >= '1' && king[1] + Y <= '8')) {
			// king 이 8 * 8 크기 체스판을 벗어나지 않으면
			king[0] += X;
			// king의 X좌표 이동
			king[1] += Y;
			// king의 Y좌표 이동
			if (king == stone) {
				// king과 stone의 위치가 겹칠 때
				if ((stone[0] + X >= 'A' && stone[0] + X <= 'H') && (stone[1] + Y >= '1' && stone[1] + Y <= '8')) {
					// stone이 8 * 8 크기의 체스판을 벗어나지 않으면
					stone[0] += X;
					// stone의 X좌표 이동
					stone[1] += Y;
					// stone의 Y좌표 이동
				}
				else {
					// stone이 8 * 8 크기의 체스판을 벗어나면
					king[0] -= X;
					king[1] -= Y;
					// king의 이동 무효화 즉 이동 명령 무효화
				}
			}
		}
		else { 
			// king이 8 * 8 크기의 체스판을 벗어나면 이동 명령 무효화
			continue; 
		}
	}
	cout << king << endl << stone << endl;
	// king과 stone의 위치 출력
}
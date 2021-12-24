#include<iostream>
using namespace std;
#define SIZE 8
// 체스판의 크기 8
int main() {
	char chess[SIZE][SIZE] = { "" };
	// 2차원 배열 == 체스판
	int count = 0;
	// 하얀칸 위의 말을 셀 count
	for (int i = 0; i < SIZE; i++) {
		for (int j = 0; j < SIZE; j++) {
			cin >> chess[i][j];
			// 체스판 내용 삽입
			if (i % 2 == 0 && j%2==0) {
				// 0,0부터 하얀 칸, 그 후로 짝수번 째 행과 열마다 하얀칸
				chess[i][j] == 'F' ? count++ : count;
				// 말이 있으면 count++ 
			}
			else if (i % 2 == 1 && j % 2 == 1) {
				// 0,1부터 하얀 칸, 그 후로 홀수번 째 행과 열마다 하얀칸
				chess[i][j] == 'F' ? count++ : count;
				// 말이 있으면 count++ 
			}
		}
	}
	cout << count;
}
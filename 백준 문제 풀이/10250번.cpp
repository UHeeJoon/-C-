#include<iostream>
using namespace std;
int main() {
	int t, h, w, n;
	// 입력받는 횟수 t/ 건물 높이 h/ 방의 개수 w/ 손님 순서 n
	cin >> t;
	for (int i = 0; i < t; i++) {
		cin >> h >> w >> n;
		int room = 0, count = 0;	// 방번호 room/ 시행횟수 count
		for (int j = 1; j <= w; j++) {	// 1호부터 
			for (int k = 1; k <= h; k++) {	// 층별로 계산
				count++;
				if (count == n) {// 손님 순서만큼 진행하면
					room = k * 100 + j;	// 방 번호 == 층 *100 + 방
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
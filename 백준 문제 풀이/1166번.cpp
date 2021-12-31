// 미해결
/*
#include<iostream>
using namespace std;
int main() {
	double N, L, W, H;
	cin >> N >> L >> W >> H;
	cout.precision(15);
	double left = 0, right = 1000000000, mid;
	for (int i = 0; i < 10000; i++) {
		mid = (left+ right) / 2;
		if (((long long)(L / mid) * (long long)(W / mid) * (long long)(H / mid)) < N)
			right = mid;
		else
			left = mid;
	}
	printf("%.10lf", left);
}
*/
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	long long int N, L, W, H; //N은 갯수, L과 W와 H는 직육면체 변의길이
	double start = 0; //탐색 시작
	double stop; //탐색 끝

	scanf_s("%lld %lld %lld %lld", &N, &L, &W, &H);
	stop = (double)max(L, max(W, H)); //가로, 세로, 높이 중에서 가장 긴 변의 길이를 탐색 끝으로 잡는다.

	//10000번씩 2분할하면 start와 stop의 차이가 굉장히 굉장히 작아진다. 결과적으로 stop - start가 1e-10보다 작아진다.
	//start <= stop && stop - start > 1e-10은 불가능하다. stop - start가 계속 1e-10보다 크게 유지할 수 있기 때문이다.
	for (int i = 0; i < 10000; i++) {
		long double mid = (start + stop) / 2; //현재 탐색하려는 A의 길이를 설정
		if (((long long)(L / mid)) * ((long long)(W / mid)) * ((long long)(H / mid)) >= N) { //상자의 넣을 수 있다면
			start = mid; //시작을 mid로 설정
		}
		else { //상자에 넣을 수 없다면
			stop = mid; //끝을 mid로 설정
		}
	}

	printf("%.10lf", stop); //출력은 start와 stop 둘 중의 하나로 아무거나 출력해도 된다. 차이가 1e-10보다 작기 때문이다.
}
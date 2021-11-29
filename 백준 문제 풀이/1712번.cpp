#include<iostream>
using namespace std;
int main() {
	int a, b, c;	// 고정비용 a, 인건비 재료비 b, 판매가격 c
	cin >> a >> b >> c;
	if (b >= c)		// 인건비와 재료비를 담은 b가 판매하는 가격보다 크면 -1 출력
		cout << -1;
	else
		cout << a / (c - b) + 1;	// 고정비용 / (판매가격 - 인건비 재료비) 여기까지 하면 고정비용과 판매 수익이 같아지는 시점이므로 + 1
}
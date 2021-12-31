#include<iostream>
#include<cmath>
using namespace std;
int main() {
	int M, N;
	cin >> M >> N;
	int min = 0 , max = 0;
	(int)pow((int)sqrt(M), 2) == M ? min = M : min = M = (int)pow((int)sqrt(M) + 1, 2);
	for (int i = (int)sqrt(M); i <= (int)sqrt(N); i++)	
		max = max + i * i;
	if (min > N) 
		cout << -1;
	else
		cout << max << "\n" << min;
}
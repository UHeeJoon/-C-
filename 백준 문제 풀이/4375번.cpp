
#include<iostream>
using namespace std;
int n;
int main() {
	while (scanf_s("%d", &n) != EOF) {
		int cnt = 1, ret = 1;
		while (true){
			cout << cnt << "   ";
			if (cnt % n == 0) {
				printf("\n%d\n", ret);
				break;
			}
			else {
				cnt = (cnt %n) * (10 % n) + 1;
				// cnt = (cnt * 10 )+1
				// cnt %= n;
				ret++;
			}
		}
	}
}

/*
n==3
1 %3 = (0*10 +1) %3
11 %3 = (1*10+1)%3 = ((1%3)*10 +1)%3 = ((1%3)*(10%3) +1)%3
111 %3 = (11*10+1)%3 == ((11%3)*10+1)%3

모듈러 연산!
(a + b) mod n = ((a mod n) + (b mod n)) mod n
(a * b) mod n = ((a mod n) * (b mod n)) mod n
*/
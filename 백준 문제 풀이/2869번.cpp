#include<iostream>
using namespace std;
int main() {
	int a, b, c; cin >> a >> b >> c;
	(c - a) % (a - b) != 0 ? cout << (c - a) / (a - b) + 2 : cout << (c - a) / (a - b) + 1;
	// (1). c - a 는 마지막 날엔 미끄러지지 않으니  -a를 하고  결과 값에 +1
	// (2). a - b 는 하루에 이동한 거리 
	// (조건 a) (c - a) % (a - b) != 0는 /를 했을때 나머지 값의 유무에 따라 1이 낮아지기 때문에 고려
	// (c - a) % (a - b) != 0 참이면 a조건에 의하여 +1 
}
/*
* #include <iostream>
* using namespace std;
* int main(){
*	int a, b, v;
* cin >> a >> b >> v;
* cout<< (v - b - 1) / (a - b) + 1;
* }
*/
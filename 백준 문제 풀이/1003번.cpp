#include<iostream>
using namespace std;
int fibonacci(int num) {
    int fibo[42] = {1, 0 ,1, };
    // 입력 범위 40 쓰레기값 을 대빟 42까지 설정
    // 입력 값이 0일 때, 1일 때, 2일 때 설정 
    for (int i = 3; i <= num; i++) {
        // 규칙에 의거하여 배열에 0과 1의 개수 미리 저장
        // 2일 때 1, 1 / 3일 때 1, 2 / 4일 때 2, 3 / 5일 때 3, 5 .....
        fibo[i] = fibo[i - 1] + fibo[i - 2];
    }
    return fibo[num];
}
int main() {
    int T, N;
    // 실행 횟수 T/ 입력받는 수 N
    cin >> T;
    for (int i = 0; i < T; i++) {
        cin >> N;
        cout << fibonacci(N) << " " << fibonacci(N + 1) << endl;
        // 0을 입력받을 때를 위해서 N과 N + 1로 설정
    }
}
/*  
#include<iostream>
using namespace std;
int zero = 0, one = 0;
int fibonacci(int num) {
    if (num == 0) {
        zero++;
        return 0;
    }
    if (num == 1) {
        one++;
        return 1;
    }
    
    return fibonacci(num - 2) + fibonacci(num - 1);
}
int main() {
    int T, N;
    cin >> T;
    for (int i = 0; i < T; i++) {
        zero = 0, one = 0;
        cin >> N;
        fibonacci(N);
        cout << zero << " " << one << endl;
    }
}
*/
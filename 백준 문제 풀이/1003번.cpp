#include<iostream>
using namespace std;
int fibonacci(int num) {
    int fibo[42] = {1, 0 ,1, };
    // �Է� ���� 40 �����Ⱚ �� �땽 42���� ����
    // �Է� ���� 0�� ��, 1�� ��, 2�� �� ���� 
    for (int i = 3; i <= num; i++) {
        // ��Ģ�� �ǰ��Ͽ� �迭�� 0�� 1�� ���� �̸� ����
        // 2�� �� 1, 1 / 3�� �� 1, 2 / 4�� �� 2, 3 / 5�� �� 3, 5 .....
        fibo[i] = fibo[i - 1] + fibo[i - 2];
    }
    return fibo[num];
}
int main() {
    int T, N;
    // ���� Ƚ�� T/ �Է¹޴� �� N
    cin >> T;
    for (int i = 0; i < T; i++) {
        cin >> N;
        cout << fibonacci(N) << " " << fibonacci(N + 1) << endl;
        // 0�� �Է¹��� ���� ���ؼ� N�� N + 1�� ����
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
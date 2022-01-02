#include <iostream>
#include <cmath>
using namespace std;
int main(void){
    ios_base::sync_with_stdio(0);   cin.tie(0);
    int T;  cin >> T;
    for (int i = 0; i < T; i++){
        int N;  cin >> N;
        int sumC = 0;
        double sumG = 0.0;
        for (int i = 0; i < N; i++){
            int c;
            double g;
            cin >> c >> g;
            sumC += c;
            sumG += (c * g);
        }
        printf("%d %.1f\n", sumC, round(10 * sumG / sumC) / 10);
    }
}

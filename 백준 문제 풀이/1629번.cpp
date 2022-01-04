
#include<iostream>
using namespace std;
typedef long long ll;
ll a, b, c;
ll go(ll a, ll b) {
    if (b == 1)return a % c;
    ll _c = go(a, b / 2);
    _c = (_c * _c) % c;
    if (b % 2) _c = (_c * a) % c;
    return _c;
}
int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    cin >> a >> b >> c;
    cout << go(a, b) << " \n";
    return 0;
}
// (A * B) %C =( A % C * B % C ) % C 
/*
#include <iostream>
using namespace std;
long long mul(long long a, long long b, long long c)
{
    if (b == 1)
        return a % c;

    long long mult = mul(a, b / 2, c);

    if (!(b % 2))
        return mult % c * mult % c;

    else
        return mult % c * mult % c * (a % c) % c;
}
int main(void){
    long long a, b, c;
    cin >> a >> b >> c;
    cout << mul(a %c, b, c);
    return 0;
}
*/
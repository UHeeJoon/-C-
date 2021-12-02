#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
int main() {
    string A = { 0 }, B = { 0 }, C;
    // 큰 수를 담을 A, B/ A와 B의 합을 담을 C
    cin >> A >> B;

    int len, sum, ten = 0, al = 0, bl = 0;
    // A와 B중 더 큰수의 길이를 담을 len / 각 자릿수의 합을 담을 sum / 자릿수의 합이 10이상면 1을 담아줄 ten
    // A의 길이를 담을 al / B의 길이를 담을 bl
    
    if (B.length() > A.length()) 
        // 둘중 더 큰 수 판별해서 큰 값의 길이를 len에 대입
        len = B.length();    
    else 
        len = A.length();

    for (int i = 1; i <= len; i++) {
        sum = 0;    // 자릿수의 합을 담을 sum 매번 0으로 초기화

        al = A.length() - i;
        bl = B.length() - i;
        // 역순으로 값을 가져옴
        // 자릿수가 차이나는 수들의 덧셈을 하기 위해서 역순으로 진행

        if (al >= 0 && al < (int)A.length())    // 두 숫자의 자릿수가 다를 가능성 고려
            sum += A[al] - '0'; // 아스키코드 활용

        if (bl >= 0 && bl < (int)B.length())    // 두 숫자의 자릿수가 다를 가능성 고려
            sum += B[bl] - '0'; // 아스키코드 활용

        sum += ten; // 올림 한 수 덧셈

        if (sum >= 10)
            // 각 자릿수의 합이 10을 넘었을 때 넘겨줄 1 생성
            ten = 1;
        else
            ten = 0;
        C += to_string(sum % 10);
        if (sum / 10 != 0 && i == len)  // A와 B를 더해서 자릿수가 증가하면
            C += to_string(sum / 10);   // 더한 값을 10으로 나눈 몫을 문자로 변경 -> 자릿수 증가 
        // if문이 없으면 419 + 733 =152가 됨/ 따라서 419 + 733 =1152를 만들어주기 위함임
    }
    reverse(C.begin(), C.end()); // 현재까지는 역순으로 정리되어있으므로 reverse

    cout << C;
    return 0;
}

/*

#include <iostream> 
#include <string> 
#include <algorithm> 
using namespace std; 
string Add(string &s1, string &s2) { 
    string result(max(s1.size(), s2.size()), '0'); 
    bool carry = false; 
    for (int i = 0; i < result.size(); i++) { 
        int temp = carry; 
        carry = false; 

        if (i < s1.size()) 
            temp += s1[s1.size() - i - 1] - '0'; 

        if (i < s2.size()) 
            temp += s2[s2.size() - i - 1] - '0'; 

        if (temp >= 10) { 
            carry = true; 
            temp -= 10; 
        } 
        result[result.size() - i - 1] = temp + '0'; 
    } 

    if (carry) result.insert(result.begin(), '1'); 

    return result; 
} 

int main(void) { 
    ios_base::sync_with_stdio(0); 
    cin.tie(0); 
    string A, B; 
    cin >> A >> B; 
    string result = Add(A, B);
    cout << result << "\n"; 
    return 0; 
}
*/
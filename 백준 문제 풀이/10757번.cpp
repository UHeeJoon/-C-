#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
int main() {
    string A = { 0 }, B = { 0 }, C;
    // ū ���� ���� A, B/ A�� B�� ���� ���� C
    cin >> A >> B;

    int len, sum, ten = 0, al = 0, bl = 0;
    // A�� B�� �� ū���� ���̸� ���� len / �� �ڸ����� ���� ���� sum / �ڸ����� ���� 10�̻�� 1�� ����� ten
    // A�� ���̸� ���� al / B�� ���̸� ���� bl
    
    if (B.length() > A.length()) 
        // ���� �� ū �� �Ǻ��ؼ� ū ���� ���̸� len�� ����
        len = B.length();    
    else 
        len = A.length();

    for (int i = 1; i <= len; i++) {
        sum = 0;    // �ڸ����� ���� ���� sum �Ź� 0���� �ʱ�ȭ

        al = A.length() - i;
        bl = B.length() - i;
        // �������� ���� ������
        // �ڸ����� ���̳��� ������ ������ �ϱ� ���ؼ� �������� ����

        if (al >= 0 && al < (int)A.length())    // �� ������ �ڸ����� �ٸ� ���ɼ� ���
            sum += A[al] - '0'; // �ƽ�Ű�ڵ� Ȱ��

        if (bl >= 0 && bl < (int)B.length())    // �� ������ �ڸ����� �ٸ� ���ɼ� ���
            sum += B[bl] - '0'; // �ƽ�Ű�ڵ� Ȱ��

        sum += ten; // �ø� �� �� ����

        if (sum >= 10)
            // �� �ڸ����� ���� 10�� �Ѿ��� �� �Ѱ��� 1 ����
            ten = 1;
        else
            ten = 0;
        C += to_string(sum % 10);
        if (sum / 10 != 0 && i == len)  // A�� B�� ���ؼ� �ڸ����� �����ϸ�
            C += to_string(sum / 10);   // ���� ���� 10���� ���� ���� ���ڷ� ���� -> �ڸ��� ���� 
        // if���� ������ 419 + 733 =152�� ��/ ���� 419 + 733 =1152�� ������ֱ� ������
    }
    reverse(C.begin(), C.end()); // ��������� �������� �����Ǿ������Ƿ� reverse

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
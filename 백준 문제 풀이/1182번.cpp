#include<iostream>
#include<vector>
using namespace std;
int main() {
	vector<int> num;
	int N, S; cin >> N >> S;
	for (int i = 0; i < N; i++) {
		int element; cin >> element;
		num.push_back(element);
	}
	int count = 0;
	for (int i = 0; i < N ; i++) {
		int temp = S - num[i];
		if (find(num.begin()+i, num.end(), temp) == num.end()) { 
			; 
		}
		else count++;
	}
	cout << count;
}

/* 재귀 dfs
#include <iostream>
using namespace std;

const int MAX = 20;
int N, S;
int arr[MAX];
int result = 0;

void numOfSubset(int idx, int sum){
    sum += arr[idx]; //우선 해당 숫자를 더한다
    //기저사례: 범위 초과시
    if (idx >= N)
        return;

    //조건 성립시
    if (sum == S)
        result++;

    //해당 숫자를 안 더했을 경우
    numOfSubset(idx + 1, sum - arr[idx]);
    //해당 숫자를 더헀을 경우
    numOfSubset(idx + 1, sum);
}
int main(void){
    cin >> N >> S;
    for (int i = 0; i < N; i++)
        cin >> arr[i];
    numOfSubset(0, 0);
    cout << result << endl;
    return 0;
}
*/
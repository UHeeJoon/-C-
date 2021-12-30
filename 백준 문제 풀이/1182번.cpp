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

/* Àç±Í dfs
#include <iostream>
using namespace std;

const int MAX = 20;
int N, S;
int arr[MAX];
int result = 0;

void numOfSubset(int idx, int sum){
    sum += arr[idx]; 
    if (idx >= N)
        return;

    if (sum == S)
        result++;

    numOfSubset(idx + 1, sum - arr[idx]);
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
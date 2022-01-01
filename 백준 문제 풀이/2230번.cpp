#include<iostream>
#include<algorithm>
using namespace std;
int arr[100001];
int temp = 2000000001;
int sub(int N,int M) {
	int left = 0, right = 1;
	while (left < N) {
		if (arr[right] - arr[left] < M) {
			right = right + 1;
			continue;
		}
		if (arr[right] - arr[left] == M) {
			return M;
		}
		temp = min(temp, arr[right] - arr[left]);
		left = left + 1;
	}
	return temp;
}
int main() {
	ios::sync_with_stdio(0);cin.tie(0);
	int N, M; cin >> N >> M;
	for (int i = 0; i < N; i++) cin >> arr[i];
	sort(arr, arr + N);
	printf("%d",sub(N, M));
}
/*
#include <iostream>
#include <algorithm>
#include <array>
using namespace std;
array<int, 100'000> A;
int N, M;
int Ans = 2'000'000'001;
int main(){
    ios::sync_with_stdio(false);
	cin.tie(nullptr);   cout.tie(nullptr);
    cin >> N >> M;
    for (int i = 0; i < N; ++i)
        cin >> A[i];
    // 오름차순으로 정렬한다.
    sort(A.begin(), A.begin() + N);
    // 처음부터 하나하나 비교해가며 답을 찾는다.
    int left = 0;
    for (int right = 0; left < N && right < N;) {
        int diff = A[right] - A[left];
        if (diff >= M){
            Ans = min(Ans, diff);
            ++left;
        }
        else
            ++right;
    }
    cout << Ans;
}
*/
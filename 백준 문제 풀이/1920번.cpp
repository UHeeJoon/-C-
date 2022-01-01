/*
#include<iostream>
#include<algorithm>
using namespace std;
int N, M;
int num[100001];
void binarySearch(int n, int arr[]) {
	int low = 0;
	int high = N - 1;
	int mid;
	while (low<=high) {
		mid = (low + high) / 2;
		if (num[mid] == n) {
			cout << '1' << "\n";
			return;
		}
		else if (num[mid] < n) {
			low = mid + 1;
		}
		else {
			high = mid - 1;
		}
	}
	cout << '0' << "\n";
	return;
}
int main() {
	ios::sync_with_stdio(0); cin.tie(0);
	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> num[i];
	}
	sort(num, num + N);
	cin >> M;
	for (int i = 0; i < M; i++) {
		int a; cin >> a;
		binarySearch(a, num);
	}
}
*/

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
typedef long long ll;
int main() {
	ios::sync_with_stdio(0);	cin.tie(0);
	vector<ll> arr;
	int N;	cin >> N;
	for (int i = 0; i < N; i++) {
		ll a; cin >> a;
		arr.push_back(a);
	}
	int M;	cin >> M;
	for (int i = 0; i < M; i++) {
		ll a; cin >> a;
		if (find(arr.begin(), arr.end(), a) == arr.end())
			printf("%d\n", 0);
		else
			printf("%d\n", 1);
	}
}
#include <iostream>
using namespace std;
//힙정렬
int n, heap[10000001];

void heapify(int i){
	int cur = 2 * i;
	if (cur < n && heap[cur] < heap[cur + 1]) cur++;
	if (heap[i] < heap[cur]){
		swap(heap[i], heap[cur]);
		if (cur <= n / 2) heapify(cur);
	}
}

void heapsort(int i){
	swap(heap[1], heap[i]);
	int root = 1;
	int cur = 2;
	while (cur / 2 < i){
		cur = 2 * root;
		if (cur < i - 1 && heap[cur] < heap[cur + 1]) cur++;
		if (cur < i&& heap[root] < heap[cur])
			swap(heap[root], heap[cur]);
		root = cur;
	}
}
int main(){
	scanf("%d", &n);
	for (int i = 1; i <= n; i++)
		scanf("%d", &heap[i]);

	for (int i = n / 2; i > 0; i--) // 최초 heap 생성
		heapify(i);
	for (int i = n; i > 0; i--) // heap 정렬
		heapsort(i);
	for (int j = 1; j <= n; j++) // 출력
		printf("%d ", heap[j]);
}
/*
// 합병 정렬
#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
int N, arr[1000001];
int* arr2;
void merge(int left, int right) {
	int mid = (left + right) / 2;
	int i = left;
	int j = mid + 1;
	int k = left;
	while (i <= mid && j <= right) {
		if (arr[i] <= arr[j])
			arr2[k++] = arr[i++];
		else
			arr2[k++] = arr[j++];
	}
	int tmp = i > mid ? j : i;
	while (k <= right) arr2[k++] = arr[tmp++];
	for (int i = left; i <= right; i++) arr[i] = arr2[i];
}
void partition(int left, int right) {
	int mid;
	if (left < right) {
		mid = (left + right) / 2;
		partition(left, mid);
		partition(mid + 1, right);
		merge(left, right);
	}
}
int main() {
	scanf("%d", &N);
	arr2 = new int[N];
	for (int i = 0; i < N; i++) scanf("%d", &arr[i]);
	partition(0, N - 1);
	for (int i = 0; i < N; i++) printf("%d\n", arr[i]);
}
*/


/*
#include<iostream>
#include<algorithm>
using namespace std;
int num[1000001];
int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	int n; cin >> n;
	for (int i = 0; i < n; i++) cin >> num[i];
	sort(num, num + n);
	for (int i = 0; i < n; i++) cout << num[i] << "\n";
	return 0;
}
*/
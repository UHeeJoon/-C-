#include<iostream>
using namespace std;
int A[51], B[51], temp[51];
int main() {
	int N; cin >> N;
	for (int i = 0; i < N; i++) cin >> A[i];
	for (int i = 0; i < N; i++) { cin >> B[i]; temp[i] = B[i]; }
	for (int i = 0; i < N - 1; i++) {
		for (int j = i + 1; j < N; j++) {
			int num = temp[i];
			if (temp[j] > num) {
				temp[i] = temp[j];
				temp[j] = num;
			}
			num = A[i];
			if (num > A[j]) {
				A[i] = A[j];
				A[j] = num;
			}
		}
	}
	int result = 0;
	for (int i = 0; i < N; i++) {
		result = result + (A[i] * temp[i]);
	}
	cout << result;
}
/* Æ²¸²
#include<iostream>
using namespace std;
int A[51], B[51], temp[51];
int main() {
	int N; cin >> N;
	for (int i = 0; i < N; i++) cin >> A[i];
	for (int i = 0; i < N; i++) { cin >> B[i]; temp[i] = B[i]; }
	for (int i = 0; i < N - 1; i++) {
		for (int j = i + 1; j < N; j++) {
			int num = temp[i];
			if (temp[j] > num) {
				temp[i] = temp[j];
				temp[j] = num;
			}
			num = A[i];
			if (num > A[j]) {
				A[i] = A[j];
				A[j] = num;
			}
		}
	}
	for (int i = 0; i < N - 1; i++) {
		int num = 0;
		for (int j = i + 1; j < N; j++) {
			if (temp[i] == B[j]) {
				num = A[j];
				A[j] = A[i];
				A[i] = num;

				num = temp[j];
				temp[j] = temp[i];
				temp[i] = num;
			}
		}
	}
	int result = 0;
	for (int i = 0; i < N; i++) {
		result = result + (A[i] * B[i]);
	}
	cout << result;
}
*/
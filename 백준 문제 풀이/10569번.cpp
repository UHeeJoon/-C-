#include<iostream>
using namespace std;
int main() {
	int N; cin >> N;
	for (int i = 0; i < N; i++) {
		int V, E; cin >> V >> E;
		cout << 2 - V + E << "\n";
	}
}
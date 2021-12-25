#include<iostream>
#include<string>
using namespace std;
int main() {
	int result = 0;
	string X, Y;
	cin >> X >> Y;
	for (int i = 0; i <=(int) (Y.length() - X.length()); i++) {
		int count = 0;
		for (int j = 0; j < (int)X.length(); j++) {
			if (X[j] == Y[j + i]) {
				count++;
			}
		}
		result = result < count ? count : result;
	}
	cout << X.length() - result << endl;	
}
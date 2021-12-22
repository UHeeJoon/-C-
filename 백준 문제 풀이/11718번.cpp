#include <iostream>
#include <string>
using namespace std;
int main(){
	string str;
	for (int i = 0; i < 100 && !cin.eof(); i++){
		// eof 활용 / c, c++은 eof를 반환할 뿐 값을 입력받지 않음
		getline(cin, str);
		cout << str << endl;
	}
}
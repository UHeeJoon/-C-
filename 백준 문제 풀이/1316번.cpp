#include<iostream>
#include<string>
using namespace std;
int main() {
	int count; cin >> count;		// 횟수를 입력받는 count
	int group_count = 0;	// 중복되어있는 그룹의 개수를 세는 group_count
	string group = "", new_group;	// 입력받을 group, 입력받은 그룹에서 중복을 제거할 new_group
	for (int i = 0; i < count; i++) {
		new_group = "";	// 매번 반복할때마다 초기화
		cin >> group;	
		for (int i = 0; i < (int)group.length() - 1; i++) {
			if (group[i] != group[i + 1]) {	// 앞 뒤 단어가 다르면
				new_group += group[i];	// new_group에 대입 함으로써 중복 제거
			}
		}
		new_group += group[group.length() - 1];	// i, i+1 중에 i만 저장 되기때문에 끝의 단어 추가

		bool dup = false;	// 새롭게 중복을 제거해서 만든 문자열에 똑같은 단어가 있는지 판단할 변수
		for (int i = 0; i < (int)new_group.length() - 1; i++) {
			for (int j = i + 1; j < (int)new_group.length(); j++) {
				if (new_group[i] == new_group[j]) {		//  new_group에 똑같은 단어가 들어있으면
					group_count += 1;	// 중복된 그룹을 카운트
					dup = true;	// 중복 판정 true
					break;	// 거기서 중지
				}
			}
			if (dup)	// 중복이면
				break;	// 중복 판단 중지
		}
	}
	cout << count - group_count;	// 받은 문자열 개수 - 중복된 문자열 개수
}


/*
int N; cin >> N;
char a[101] = { 0 };
int cont[101] = { 0 }, count = 0, num;
for (int k = 0; k < N; k++) {
	int sum = 0, b = 0;
	cin >> a;
	for (int i = 0; a[i] != NULL; i++) {
		num = (int)a[i], b = 0;
		for (int j = i; a[j] != NULL; j++) {
			if ((int)a[j] == num) {
				cont[j] = b;
				sum += cont[j];
			}
			else
				b = 1;
		}
		if (sum > 0)
			break;
	}
	if (sum == 0)
		count++;
}
cout << count;
*/
/*
#include<iostream>
using namespace std;
int main() {
	char a[150] = { NULL }; int count = 0;		// 단어 입력받는 배열 a, 크로아티아 알파벳의 개수를 담을 count
	cin >> a;
	for (int i = 0; a[i] != NULL; i++) {		// 입력받은 문자만큼 실행
		if (a[i] == 'c') {
			if (a[i + 1] == '=' || a[i + 1] == '-') {	//c=과 c- 가 있으면
				count++;	// 단어 개수 +1 
				i++;	// a+1 까지 계산한 것이므로 i++					
			}
			else
				count++; // 연관이 없는 c로 시작하는 단어 이므로 count+=1
		}
		else if (a[i] == 'd') {
			if (a[i + 1] == 'z' && a[i + 2] == '=') {	// dz=이 있으면
				count++;	// 단어 개수 +1
				i += 2;		// a+2 까지 계산한 것이므로 i+=2	
			}
			else if (a[i + 1] == '-') {		//d- 가 있으면
				count++;	// 단어 개수 +1
				i++;		// a+1 까지 계산한 것이므로 i+=1
			}
			else
				count++;	// 연관이 없는 d로 시작하는 단어 이므로 count+=1
		}
		else if (a[i] == 'l') {	
			if (a[i + 1] == 'j') {	// lj이 있으면
				count++;	// 단어 개수 +1
				i++;	// a+1 까지 계산한 것이므로 i+=1
			}
			else
				count++;	// 연관이 없는 l로 시작하는 단어 이므로 count+=1
		}
		else if (a[i] == 'n') {
			if (a[i + 1] == 'j') {	// nj이 있으면
				count++;	// 단어 개수 +1
				i++;	// a+1 까지 계산한 것이므로 i+=1
			}
			else
				count++;	// 연관이 없는 l로 시작하는 단어 이므로 count+=1
		}
		else if (a[i] == 's') {	
			if (a[i + 1] == '=') {	// s=이 있으면
				count++;	// 단어 개수 +1
				i++;	// a+1 까지 계산한 것이므로 i+=1
			}
			else
				count++;	// 연관이 없는 l로 시작하는 단어 이므로 count+=1
		}
		else if (a[i] == 'z') {
			if (a[i + 1] == '=') {	// z=이 있으면
				count++;	// 단어 개수 +1
				i++;	// a+1 까지 계산한 것이므로 i+=1
			}
			else
				count++;	// 연관이 없는 l로 시작하는 단어 이므로 count+=1
		}
		else
			count++;		// 그 외 의 일반 단어들
	}
	cout << count;
}
*/
#include<iostream>
using namespace std;
int main() {
	char a[150] = { NULL }; int count = 0;		// 단어 입력받는 배열 a, 크로아티아 알파벳의 개수를 담을 count
	cin >> a;
	for (int i = 0; a[i] != NULL; i++) {		// 입력받은 문자만큼 실행
		if ((a[i] == 'c'&& a[i + 1] == '=') || (a[i + 1] == '-'&& a[i] == 'c')) {	//c=,c-가 있으면
			count++;	// 단어 개수 +1 
			i++;	// a+1 까지 계산한 것이므로 i++					
		}
		else if (a[i] == 'd') {
			if (a[i + 1] == 'z' && a[i + 2] == '=') {	// dz=이 있으면
				count++;	// 단어 개수 +1
				i += 2;		// a+2 까지 계산한 것이므로 i+=2	
			}
			else if (a[i + 1] == '-') {		//d- 가 있으면
				count++;	// 단어 개수 +1
				i++;		// a+1 까지 계산한 것이므로 i+=1
			}
			else
				count++;	// 연관이 없는 d로 시작하는 단어 이므로 count+=1
		}
		else if (a[i] == 'l'&& a[i + 1] == 'j') {		// lj가 있으면
			count++;	// 단어 개수 +1
			i++;	// a+1 까지 계산한 것이므로 i+=1
		}
		else if (a[i] == 'n' && a[i + 1] == 'j') {		// nj가 있으면
			count++;	// 단어 개수 +1
			i++;	// a+1 까지 계산한 것이므로 i+=1
		}
		else if (a[i] == 's' && a[i + 1] == '=') {		// s=이 있으면
			count++;	// 단어 개수 +1
			i++;	// a+1 까지 계산한 것이므로 i+=1
		}
		else if (a[i] == 'z' && a[i + 1] == '=') {		// z=이 있으면
				count++;	// 단어 개수 +1
				i++;	// a+1 까지 계산한 것이므로 i+=1
		}
		else
			count++;		// 그 외 의 일반 단어들
	}
	cout << count;
}
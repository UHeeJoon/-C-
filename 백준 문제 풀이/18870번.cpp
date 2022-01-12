#include<iostream>
using namespace std;
int main() {

}

/*
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {

    vector<int> v, back;
    int N, input;

    cin >> N;

    for(int i = 0; i < N; i++) {
        cin >> input;
        v.push_back(input);
        back.push_back(input);
    }


    sort(v.begin(), v.end());
    v.erase(unique(v.begin(), v.end()), v.end());

    for(int i = 0; i < N; i++) {
        printf("%d ", lower_bound(v.begin(), v.end(), back[i]) - v.begin());
    }

}
*/

/*
#include <iostream>
#include <algorithm>
#include <vector>
#include <map>
using namespace std;
int N;
vector<int> v;
map<int, int> m;
int main()
{
	cin >> N;
	vector<int> v2;
	for (int tmp, i = 0; i < N; i++) {
		cin >> tmp;
		v.push_back(tmp);
	}

	v2 = v;
	sort(v2.begin(), v2.end());
	int idx = 1;
	for (int i = 0; i < N; i++) {
		if (m[v2[i]] == 0)
			m[v2[i]] = idx++;
		else continue;
	}

	for (int i = 0; i < N; i++) {
		cout << m[v[i]] - 1 << " ";
	}
}
*/
#include<iostream>
using namespace std;
#define MAX 1000000000

int main() {

}

/*
#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;
    vector<int> v(n); //���� ����
    // �Է�
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    vector<int> cv(v); // ���� ���͸� �����Ͽ� �ߺ� �� ���� �����ϰ� ������ ���� �� ����.
    sort(cv.begin(), cv.end()); //�������� ����
    // �ߺ� ����
    cv.erase(unique(cv.begin(), cv.end()), cv.end());
    for (int i = 0; i < n; i++)
    {
        // i��° ��Ұ��� ��ġ it
        auto it = lower_bound(cv.begin(), cv.end(), v[i]);
        // it���� cv������ ���� �ּҰ��� ���� ���� ��
        cout << it - cv.begin() << ' ';
    }

    return 0;
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
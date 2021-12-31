#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;


int main(void)
{
	int N;
	cin >> N;
	vector<pair<pair<int, int>, pair<int, string>>> v(N);



	for (int i = 0; i < N; i++)
	{
		cin >> v[i].second.second >> v[i].second.first >> v[i].first.second >> v[i].first.first;

	}

	sort(v.begin(), v.end());
	
	// pair sort 되는지 확인하기 위함
	for(int i=0;i<v.size();i++)
	{
		cout << v[i]<<"\n";
	}
	
	cout << v[N - 1].second.second << "\n" << v[0].second.second << "\n";
	return 0;
}

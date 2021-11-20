#include<vector>
using namespace std;
long long sum(std::vector<int>& a) {
	long long add_num = 0;
	for (int i = 0; i < a.size(); i++)
		add_num += a[i];
	return add_num;
}
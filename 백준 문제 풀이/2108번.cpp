/*
#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
using namespace std;
vector<int> arr;
int main() {
	int num, tmp, range, middle = 0, most_val, mean = 0;
	int most = -9999;
	int number[8001] = { 0, };
	bool not_first = false;
	cin >> num;
	for (int i = 0; i < num; i++)
	{
		cin >> tmp;
		arr.push_back(tmp);
		mean += tmp;
		number[tmp + 4000]++;
	}
	sort(arr.begin(), arr.end());
	for (int i = 0; i < 8001; i++)
	{
		if (number[i] == 0)
			continue;
		if (number[i] == most)
		{
			if (not_first)
			{
				most_val = i - 4000;
				not_first = false;
			}
		}
		if (number[i] > most)
		{
			most = number[i];
			most_val = i - 4000;
			not_first = true;
		}
	}
	middle = arr[arr.size() / 2];
	mean = round((float)mean / num);
	range = arr.back() - arr.front();
	cout << mean << '\n' << middle << '\n' << most_val << '\n' << range;
}
*/

#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std;
int num[8002];
int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	int n, temp, avg= 0; cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> temp;
		num[temp + 4000]++;
		avg += temp;
	}
	temp = 0;
	avg = (int)round((double)avg / (double)n);
	int count = 0;
	for (int i = 0; i < 8001; i++) {
		if (num[i] > count) {
			count = num[i];
			temp = i - 4000;
		}
	}
	int cnt = 2, d = 0;
	int min = 4001, max = -4001, center = 0;
	for (int i = 0; i < 8001; i++) {
		if (num[i] != 0) {
			d += num[i];
			if (d >= (n / 2 + 1)) {
				center = i - 4000;
				d = -10000000;
			}
			if (num[i] == count) cnt--;
			if (cnt == 0) {
				temp = i - 4000;
				cnt = -1;
			}
			if (min > i - 4000)
				min = i - 4000;
			if (max < i - 4000)
				max = i - 4000;
		}
		else continue;
	}
	cout << avg <<"\n" << center <<"\n" << temp <<"\n" <<max - min <<"\n";
	return 0;
}
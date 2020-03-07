#include <bits/stdc++.h>

using namespace std;

int main()
{
	int g;
	cin >> g;
	vector<long long> v;
	for(long long i=1;i<=50000;i++)
		v.push_back(i*i);
	int vsize = v.size();
	bool flag = false;
	for(int i=0;i<vsize;i++)
		if(binary_search(v.begin(), v.end(), v[i]-g))
		{
			flag = true;
			cout << (int)sqrt(v[i]) << '\n';
		}
	if(!flag) cout << -1;

	return 0;
}
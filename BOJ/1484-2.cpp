#include <bits/stdc++.h>

using namespace std;

int main()
{
	int g;
	cin >> g;
	vector<long long> v;
	for(long long i=1;i<=50000;i++)
		v.push_back(i*i);
	int l = 0, r = 1, vsize = v.size();
	bool flag = false;
	while(l<vsize && l<r)
	{
		if(r==vsize-1)
		{
			if(v[r]-v[l]==g)
			{
				cout << (int)sqrt(v[r]) << '\n';
				flag = true;
				break;
			}
			l++;
		}
		else if(v[r]-v[l]==g)
		{
			cout << (int)sqrt(v[r++]) << '\n';
			flag = true;
		}
		else if(v[r]-v[l]<g) r++;
		else l++;
	}
	if(!flag) cout << -1;

	return 0;
}
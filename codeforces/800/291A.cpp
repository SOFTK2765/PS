#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	scanf("%d", &n);
	map<int, int> mp;
	for(int i=0;i<n;i++)
	{
		int tmp;
		scanf(" %d", &tmp);
		mp[tmp]++;
	}
	int cnt = 0;
	for(auto i:mp)
	{
		if(i.first==0) continue;
		if(i.second>=3)
		{
			cnt = -1;
			break;
		}
		else if(i.second%2==0) cnt += (i.second)/2;
	}
	printf("%d", cnt);

	return 0;
}
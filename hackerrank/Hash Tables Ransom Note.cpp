#include <bits/stdc++.h>

using namespace std;

int main()
{
	int m, n;
	scanf("%d %d", &m, &n);
	map<string, int> mp;
	for(int i=0;i<m;i++)
	{
		string s;
		cin >> s;
		mp[s]++;
	}
	bool flag = false;
	for(int i=0;i<n;i++)
	{
		string s;
		cin >> s;
		if(mp[s]==0)
		{
			flag = true;
			break;
		}
		mp[s]--;
	}
	printf("%s", flag?"No":"Yes");

	return 0;
}
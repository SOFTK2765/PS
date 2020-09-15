#include <bits/stdc++.h>

using namespace std;

string s[1001];
int score[1001];

int main()
{
	int n;
	scanf("%d", &n);
	map<string, int> mp;
	for(int i=0;i<n;i++)
	{
		cin >> s[i] >> score[i];
		mp[s[i]] += score[i];
	}
	int mx = -987654321;
	for(auto i:mp)
		mx = max(mx, i.second);
	vector<string> v;
	for(auto i:mp)
		if(mx==i.second) v.push_back(i.first);
	map<string, int> mp2;
	if(v.size()==1) cout << v[0];
	else
	{
		sort(v.begin(), v.end());
		for(int i=0;i<n;i++)
		{
			mp2[s[i]] += score[i];
			if(mp2[s[i]]>=mx)
			{
				if(binary_search(v.begin(), v.end(), s[i]))
				{
					cout << s[i];
					break;
				}
			}
		}
	}

	return 0;
}
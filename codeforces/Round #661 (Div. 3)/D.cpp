#include <bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	scanf("%d", &t);
	while(t--)
	{
		int n;
		scanf(" %d", &n);
		string s;
		cin >> s;
		set<int> zero, one;
		int pos = 1;
		vector<int> res;
		for(int i=0;i<n;i++)
		{
			if(s[i]=='0')
			{
				if(one.empty())
				{
					zero.insert(pos);
					res.push_back(pos);
					pos++;
				}
				else
				{
					int tmp = *(one.begin());
					one.erase(one.begin());
					zero.insert(tmp);
					res.push_back(tmp);
				}
			}
			else
			{
				if(zero.empty())
				{
					one.insert(pos);
					res.push_back(pos);
					pos++;
				}
				else
				{
					int tmp = *(zero.begin());
					zero.erase(zero.begin());
					one.insert(tmp);
					res.push_back(tmp);
				}
			}
		}
		printf("%d\n", pos-1);
		for(auto i:res)
			printf("%d ", i);
		printf("\n");
	}

	return 0;
}
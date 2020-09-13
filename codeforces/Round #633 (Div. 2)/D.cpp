#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	scanf("%d", &n);
	vector<vector<int>> adj(n+1);
	for(int i=0;i<n;i++)
	{
		int tmp1, tmp2;
		scanf(" %d %d", &tmp1, &tmp2);
		adj[tmp1].push_back(tmp2);
		adj[tmp2].push_back(tmp1);
	}
	int rt = 1;
	for(int i=1;i<=n;i++)
		if(adj[i].size()>1)
		{
			rt = i;
			break;
		}
	for(int i=0;i<)

	return 0;
}
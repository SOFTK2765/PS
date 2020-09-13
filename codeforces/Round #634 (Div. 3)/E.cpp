#include <bits/stdc++.h>

using namespace std;

int a[200001];
int cnt[201];
pair<int, int> sidecnt[201];
bool check1[201], check2[201];

int main()
{
	int t;
	scanf("%d", &t);
	while(t--)
	{
		memset(cnt, 0, sizeof(cnt));
		memset(sidecnt, 0, sizeof(cnt));
		int n;
		scanf(" %d", &n);
		for(int i=0;i<n;i++)
		{
			scanf(" %d", &a[i]);
			cnt[a[i]]++;
		}
		for(int i=0;i<(n-1)/2;i++)
		{
			sidecnt[a[i]].first++;
			cnt[a[i]]--;
			sidecnt[a[n-1-i]].second++;
			cnt[a[n-1-i]]--;
			int mx = 0;
			for(int j=1;j<=200;j++)
				mx = max(mx, min(sidecnt[j].first, sidecnt[j].second)*2);
			memset(check1, 0, sizeof(check1));
			for(int j=1;j<=200;j++)
				if(min(sidecnt[j].first, sidecnt[j].second)*2==mx) check1[j] = true;
			mx = 0;
			for(int j=1;j<=200;j++)
				mx = max(mx, cnt[j]);
			memset(check2, 0, sizeof(check2));
			for(int j=1;j<=200;j++)
				if(cnt[j]==mx) check2[j] = true;
			for(int j=1;j<=200;j++)
				if(check1[j])
				{
					for(int k=1;k<=200;k++)
						if(check2[k])
						{
							pos==0
						}
				}
		}
	}

	return 0;
}
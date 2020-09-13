#include <bits/stdc++.h>

using namespace std;

int a[200001];
bool check[200001];

int main()
{
	int t;
	scanf("%d", &t);
	while(t--)
	{
		memset(check, 0, sizeof(check));
		int n, k;
		scanf(" %d %d", &n, &k);
		for(int i=0;i<n;i++)
			scanf(" %d", &a[i]);
		for(int i=0;i<n-2;i++)
			if(a[i+1]-a[i]>0 && a[i+1]-a[i+2]>0) check[i+1] = true;
		int cnt = 0;
		for(int i=1;i<k-1;i++)
			if(check[i]) cnt++;
		int mx = cnt, mxi = 1;
		for(int i=k-2;i<n-2;i++)
		{
			if(check[i+1]) cnt++;
			if(check[i-k+3]) cnt--;
			if(mx<cnt)
			{
				mx = cnt;
				mxi = i-k+4;
			}
		}
		printf("%d %d\n", mx+1, mxi);
	}

	return 0;
}
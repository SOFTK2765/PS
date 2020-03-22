#include <bits/stdc++.h>

using namespace std;

long long a[31];
bool check[101];

int main()
{
	int t;
	scanf("%d", &t);
	while(t--)
	{
		int n, k;
		scanf(" %d %d", &n, &k);
		for(int i=0;i<n;i++)
			scanf(" %lld", &a[i]);
		memset(check, 0, sizeof(check));
		bool flag = false;
		for(int i=0;i<n;i++)
		{
			int j = 0;
			while(a[i]>=(long long)pow(k, j++));
			for(;j>=0;j--)
			{
				long long tmp = (long long)pow(k, j);
				if(a[i]>=tmp)
				{
					if(check[j])
					{
						flag = true;
						break;
					}
					check[j] = true;
					a[i] -= tmp;
				}

			}
			if(flag) break;
		}
		printf("%s\n", flag?"NO":"YES");
	}

	return 0;
}
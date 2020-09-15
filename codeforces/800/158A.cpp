#include <bits/stdc++.h>

using namespace std;

int a[51];

int main()
{
	int n, k;
	scanf("%d %d", &n, &k);
	for(int i=0;i<n;i++)
		scanf(" %d", &a[i]);
	if(a[k-1]==0)
	{
		int pos = k;
		while(--pos>=0 && a[pos]==0);
		printf("%d", pos+1);
	}
	else
	{
		for(int i=k-1;i<n;i++)
			if(a[i]!=a[i+1])
			{
				printf("%d", i+1);
				break;
			}
	}

	return 0;
}
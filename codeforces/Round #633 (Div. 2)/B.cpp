#include <bits/stdc++.h>

using namespace std;

int a[100001];

int main()
{
	int t;
	scanf("%d", &t);
	while(t--)
	{
		int n;
		scanf(" %d", &n);
		for(int i=0;i<n;i++)
			scanf(" %d", &a[i]);
		sort(a, a+n);
		int mid = (n-1)/2;
		printf("%d ", a[mid]);
		for(int i=1;i<=mid+1;i++)
		{
			if(mid+i<n) printf("%d ", a[mid+i]);
			if(mid-i>=0) printf("%d ", a[mid-i]);
		}
		printf("\n");
	}

	return 0;
}
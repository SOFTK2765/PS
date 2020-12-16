#include <bits/stdc++.h>

using namespace std;

int a[100001];

int main()
{
	int n;
	scanf("%d", &n);
	int mn = 1987654321;
	for(int i=0;i<n;i++)
	{
		scanf(" %d", &a[i]);
		mn = min(mn, a[i]);
	}
	int pre = -1, dismn = 987654321;
	for(int i=0;i<n;i++)
		if(a[i]==mn)
		{
			if(pre!=-1) dismn = min(dismn, i-pre);
			pre = i;
		}
	printf("%d", dismn);

	return 0;
}
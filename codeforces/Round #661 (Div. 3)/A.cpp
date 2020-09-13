#include <bits/stdc++.h>

using namespace std;

int a[51];

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
		bool check = false;
		for(int i=1;i<n;i++)
			if(a[i]-a[i-1]>1) check = true;
		printf("%s\n", check?"NO":"YES");
	}

	return 0;
}
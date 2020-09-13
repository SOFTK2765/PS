#include <bits/stdc++.h>

using namespace std;

char a[51][51];

int main()
{
	int n, m;
	scanf("%d %d", &n, &m);
	for(int i=0;i<n;i++)
		scanf(" %s", a[i]);
	int mni, mnj, mxi, mxj;
	bool flag = false;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
			if(a[i][j]=='*')
			{
				mni = i;
				flag = true;
			}
		if(flag) break;
	}
	flag = false;
	for(int i=n-1;i>=0;i--)
	{
		for(int j=0;j<m;j++)
			if(a[i][j]=='*')
			{
				mxi = i;
				flag = true;
			}
		if(flag) break;
	}
	flag = false;
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
			if(a[j][i]=='*')
			{
				mnj = i;
				flag = true;
			}
		if(flag) break;
	}
	flag = false;
	for(int i=m-1;i>=0;i--)
	{
		for(int j=0;j<n;j++)
			if(a[j][i]=='*')
			{
				mxj = i;
				flag = true;
			}
		if(flag) break;
	}
	for(int i=mni;i<=mxi;i++)
	{
		for(int j=mnj;j<=mxj;j++)
			printf("%c", a[i][j]);
		printf("\n");
	}

	return 0;
}
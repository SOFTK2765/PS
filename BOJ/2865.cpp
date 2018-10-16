#include <stdio.h>

int main()
{
	int n, m, k, max;
	double temp, sum=0;
	scanf("%d %d %d", &n, &m, &k);
	int a[100][100];
	double s[100][100];
	double hs[100];
	for(int i=0;i<100;i++)
		hs[i]=0;
	for(int i=0;i<m;i++)
		for(int j=0;j<n;j++)
			scanf("%d %lf", &a[i][j], &s[i][j]);
	for(int i=0;i<m;i++)
		for(int j=0;j<n;j++)
			if(hs[a[i][j]]<s[i][j]) hs[a[i][j]]=s[i][j];
	for(int i=1;i<n;i++)
	{
		max = i;
		for(int j=i+1;j<n+1;j++)
			if(hs[max]<hs[j]) max=j;
		temp=hs[max];
		hs[max]=hs[i];
		hs[i]=temp;
	}
	for(int i=1;i<=k;i++)
		sum+=hs[i];
	printf("%.1lf", sum);
	
	return 0;
}

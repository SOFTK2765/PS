#include <bits/stdc++.h>

using namespace std;

int a[31][31];

int main()
{
	int n;
	scanf("%d", &n);
	for(int i=0;i<n;i++)
		for(int j=0;j<n;j++)
			scanf(" %d", &a[i][j]);
	int cnt = 0;
	for(int i=0;i<n;i++)
	{
		int rowsum = 0;
		for(int j=0;j<n;j++)
			rowsum += a[i][j];
		for(int j=0;j<n;j++)
		{
			int colsum = 0;
			for(int k=0;k<n;k++)
				colsum += a[k][j];
			if(rowsum<colsum) cnt++;
		}
	}
	printf("%d", cnt);

	return 0;
}
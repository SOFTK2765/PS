#include <bits/stdc++.h>

using namespace std;

int a[200001];

int main()
{
	int n;
	scanf("%d", &n);
	int sum = 0;
	for(int i=0;i<n;i++)
	{
		scanf(" %d", &a[i]);
		sum += a[i];
	}
	int tmpsum = 0;
	for(int i=0;i<n;i++)
	{
		tmpsum += a[i];
		if(tmpsum>=(sum+1)/2)
		{
			printf("%d", i+1);
			break;
		}
	}

	return 0;
}
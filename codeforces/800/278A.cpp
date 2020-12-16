#include <bits/stdc++.h>

using namespace std;

int a[101];

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
	int s, e;
	scanf(" %d %d", &s, &e);
	if(s>e) swap(s, e);
	int tmpsum = 0;
	for(int i=s-1;i<e-1;i++)
		tmpsum += a[i];
	printf("%d", min(tmpsum, sum-tmpsum));

	return 0;
}
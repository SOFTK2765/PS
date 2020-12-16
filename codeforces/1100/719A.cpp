#include <bits/stdc++.h>

using namespace std;

int a[93];

int main()
{
	int n;
	scanf("%d", &n);
	for(int i=0;i<n;i++)
		scanf(" %d", &a[i]);
	if(a[n-1]==15) printf("DOWN");
	else if(a[n-1]==0) printf("UP");
	else if(n==1) printf("-1");
	else if(a[n-1]-a[n-2]>0) printf("UP");
	else printf("DOWN");

	return 0;
}
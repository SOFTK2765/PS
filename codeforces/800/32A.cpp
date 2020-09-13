#include <bits/stdc++.h>

using namespace std;

int a[1001];

int main()
{
	int n, d;
	scanf("%d %d", &n, &d);
	for(int i=0;i<n;i++)
		scanf(" %d", &a[i]);
	int cnt = 0;
	for(int i=0;i<n;i++)
		for(int j=0;j<n;j++)
			if(i!=j && abs(a[i]-a[j])<=d) cnt++;
	printf("%d", cnt);

	return 0;
}
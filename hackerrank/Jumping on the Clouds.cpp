#include <bits/stdc++.h>

using namespace std;

int a[101];

int main()
{
	int n;
	scanf("%d", &n);
	for(int i=0;i<n;i++)
		scanf(" %d", &a[i]);
	int cnt = 0, pos = 0;
	while(pos<n-1)
	{
		if(pos+2<n && a[pos+2]==0)
		{
			pos += 2;
			cnt++;
		}
		else
		{
			pos++;
			cnt++;
		}
	}
	printf("%d", cnt);

	return 0;
}
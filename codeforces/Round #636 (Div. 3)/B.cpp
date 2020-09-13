#include <bits/stdc++.h>

using namespace std;



int main()
{
	int t;
	scanf("%d", &t);
	while(t--)
	{
		int n;
		scanf(" %d", &n);
		if((n/2)%2==1)
		{
			printf("NO\n");
			continue;
		}
		printf("YES\n");
		for(int i=1;i<=n/4;i++)
			printf("%d %d ", n-i*2, n+i*2);
		for(int i=1;i<=n/4;i++)
			printf("%d %d ", n-i*2+1, n+i*2-1);
		printf("\n");
	}	

	return 0;
}
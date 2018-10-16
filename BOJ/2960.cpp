#include <stdio.h>

bool a[1001];

int main()
{
	int n, k, count=0, save=0;
	scanf("%d %d", &n, &k);
	for(int i=2;i<=n;i++)
	{
		for(int j=1;i*j<=n;j++)
		{
			if(a[i*j]!=true)
			{
				a[i*j]=true;
				count++;
				if(count==k)
				{
					save=i*j;
					break;
				}
			}
		}
		if(save!=0) break;
	}
	printf("%d", save);
		
	return 0;
}

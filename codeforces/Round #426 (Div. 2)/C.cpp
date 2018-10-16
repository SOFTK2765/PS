#include <stdio.h>

int e1[32000], e2[32000];

int main()
{
	int n, a, b;
	scanf("%d", &n);
	for(int i=0;i<n;i++)
	{
		scanf("%d %d", &a, &b);
		for(int j=2;j<32000;j++)
		{
			if(a==1) break;
			if(a%j==0)
			{
				a/=j;
				e1[j]++;
				j--;
			}
		}
		for(int j=2;j<32000;j++)
		{
			if(b==1) break;
			if(b%j==0)
			{
				b/=j;
				e2[j]++;
				j--;
			}
		}
		for(int j=0;j<32000;j++)
		{
			if(e1[j]+e2[j]!=0 && (e1[j]+e2[j])%3!=0)
			{
				printf("No\n");
				break;
			}
			else if(e1[j]>e2[j] && (e1[j]-(e1[j]-e2[j])*2)%3!=0)
			{
				printf("No\n");
				break;
			}
			else if(e1[j]<e2[j] && (e2[j]-(e2[j]-e1[j])*2)%3!=0)
			{
				printf("No\n");
				break;
			}
			if(j==31999) printf("Yes\n");
		}
		for(int j=0;j<32000;j++)
		{
			e1[j]=0;
			e2[j]=0;
		}
	}
	
	return 0;
}

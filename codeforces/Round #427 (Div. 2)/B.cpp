#include <stdio.h>
#include <string.h>

int k;
char a[100001];

int main()
{
	scanf("%d %s", &k, a);
	int l=strlen(a);
	int sum=0;
	for(int i=0;i<l;i++)
		sum+=a[i]-'0';
	if(k<=sum)
	{
		printf("%d", 0);
		return 0;
	}
	k-=sum;
	int count=0;
	for(int i=0;i<l;i++)
	{
		k-=9-(a[l-1-i]-'0');
		count+=9-(a[l-1-i]-'0');
		if(k<0)
		{
			count+=k;
			break;
		}
		else if(k==0) break;
	}
	if (k<=0)printf("%d", count);
	else printf("%d", 0);
	
	return 0;
}

#include <stdio.h>
#include <string.h>
#include <algorithm>

using namespace std;

int k;
char a[100001];

int main()
{
	scanf("%d %s", &k, a);
	int l=strlen(a);
	sort(a, a+l);
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
		if(a[i]=='9') break;
		k-=9-(a[i]-'0');
		count++;
		if(k<=0) break;
	}
	printf("%d", count);
	
	return 0;
}

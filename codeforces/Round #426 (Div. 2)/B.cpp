#include <stdio.h>
#include <string.h>

char a[1000001];
int c[26];
bool cc[26];

int main()
{
	int n, k;
	scanf("%d %d %s", &n, &k, a);
	int l=strlen(a);
	for(int i=0;i<l;i++)
		c[a[i]-'A']++;
	int p=0;
	for(int i=0;i<l;i++)
	{
		if(c[a[i]-'A']==1)
		{
			if(p==0)
			{
				cc[a[i]-'A']=true;
				i--;
				p=1;
			}
			else if(p==1)
			{
				cc[a[i]-'A']=false;
				p=0;
				c[a[i]-'A']--;
			}
			
		}
		else
		{
			cc[a[i]-'A']=true;
			c[a[i]-'A']--;
		}
		
		int count=0;
		for(int j=0;j<26;j++)
			if(cc[j]==true) count++;
		if(count>k)
		{
			printf("YES");
			return 0;
		}
	}
	printf("NO");
	
	return 0;
}

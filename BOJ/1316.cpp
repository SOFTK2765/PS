#include <stdio.h>
#include <string.h>

int main()
{
	int n, count=0;
	char a[101];
	bool b[26];
	scanf("%d ", &n);
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<26;j++)
			b[j]=false;
		scanf("%s", a);
		int l=strlen(a);
		for(int j=0;j<l;j++)
		{
			if(j==0) b[a[j]-'a']=true;
			else
			{
				if(a[j]!=a[j-1] && b[a[j]-'a']==false) b[a[j]-'a']=true;
				else if(a[j]!=a[j-1] && b[a[j]-'a']==true) break;
			}
			if(j==l-1) count++;
		}
	}
	printf("%d", count);
	
	return 0;
}

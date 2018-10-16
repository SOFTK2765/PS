#include <stdio.h>
#include <string.h>

char a[27], b[27], s[1001];

int main()
{
	scanf("%s %s %s", a, b, s);
	int l=strlen(s);
	for(int i=0;i<l;i++)
	{
		for(int j=0;j<26;j++)
		{
			if(65<=s[i] && s[i]<=90)
			{
				if(s[i]+32==a[j]) printf("%c", b[j]-32);
			}
			else if(48<=s[i] && s[i]<=57)
			{
				printf("%c", s[i]);
				break;
			}
			else
			{
				if(s[i]==a[j]) printf("%c", b[j]);
			}
		}
	}
	
	return 0;
}

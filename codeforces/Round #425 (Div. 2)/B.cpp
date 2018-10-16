#include <stdio.h>
#include <string.h>

char a[27], b[20005], t[20005];
int c[20005];
int d;

int main()
{
	int n, bc=0;
	scanf("%s %s %d", a, b, &n);
	int al=strlen(a);
	int bl=strlen(b);
	for(int i=0, j=0;i<bl;i++)
	{
		if(b[i]=='?')
		{
			c[j]=i;
			j++;
		}
		else if(b[i]=='*') d=i;
	}
	for(int i=0;i<n;i++)
	{
		int esc=0, l=0;
		scanf("%s", t);
		int tl=strlen(t);
		for(int j=0;j<bl;j++)
		{
			if(j!=c[l])
			{
				.
				if(t[j]!='a')
				{
					esc=1;
					printf("NO\n");
					break;
				}
			}
			else
			{
				for(int k=0;k<al;k++)
				{
					if(t[j]==a[k])
					{
						l++;
						break;
					}
					if(k==al-1)
					{
						esc=1;
						printf("NO\n");
						break;
					}
				}
			}
			if(esc==1) break;
			if(j==bl-1 && bc!=1) printf("YES\n");
			if(bc==1)
			{
				for(int j=0;j<al;j++)
				{
					if(t[bl]==a[j])
					{
						esc=1;
						printf("NO\n");
						break;
					}
				}
		}
		
		if(esc==1) continue;
		printf("YES\n");	
		}
	}
	
	return 0;
}

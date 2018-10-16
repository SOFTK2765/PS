#include <stdio.h>
#include <string.h>

int main()
{
	int n, tf=0;
	scanf("%d", &n);
	char a[61], t[61], p[11];
	memset(a, 0, sizeof(a));
	memset(p, 0, sizeof(p));
	scanf("%s", a);
	int l=strlen(a);
	for(int i=0;i<l/6;i++)
	{
		strncpy(t, a+i*6, 6);
		if(strcmp(t, "000000")==0) p[i]='A';
		else if(strcmp(t, "001111")==0) p[i]='B';
		else if(strcmp(t, "010011")==0) p[i]='C';
		else if(strcmp(t, "011100")==0) p[i]='D';
		else if(strcmp(t, "100110")==0) p[i]='E';
		else if(strcmp(t, "101001")==0) p[i]='F';
		else if(strcmp(t, "110101")==0) p[i]='G';
		else if(strcmp(t, "111010")==0) p[i]='H';
		else
		{
			for(int j=0;j<6;j++)
			{
				t[j]=(t[j]=='0')?'1':'0';
				if(strcmp(t, "000000")==0)
				{
					p[i]='A';
					break;
				}
				else if(strcmp(t, "001111")==0)
				{
					p[i]='B';
					break;
				}
				else if(strcmp(t, "010011")==0)
				{
					p[i]='C';
					break;
				}
				else if(strcmp(t, "011100")==0)
				{
					p[i]='D';
					break;
				}
				else if(strcmp(t, "100110")==0)
				{
					p[i]='E';
					break;
				}
				else if(strcmp(t, "101001")==0)
				{
					p[i]='F';
					break;
				}
				else if(strcmp(t, "110101")==0)
				{
					p[i]='G';
					break;
				}
				else if(strcmp(t, "111010")==0)
				{
					p[i]='H';
					break;
				}
				t[j]=(t[j]=='0')?'1':'0';
				if(j==5) tf++;
			}
			if(tf==1)
			{
				printf("%d", i+1);
				break;
			}
		}
	}
	if(tf!=1) printf("%s", p);
	
	return 0;
}

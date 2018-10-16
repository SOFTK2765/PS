#include <stdio.h>
#include <string.h>
#include <math.h>

int main()
{
	char a[5], b[5], at[5], bt[5];
	int t[5];
	int f=0, r=0, tt=1;
	scanf("%s %s", a, b);
	int len=strlen(a);
	for(int i=0;i<len;i++)
		at[len-i-1]=a[i];
	len=strlen(b);
	for(int i=0;i<len;i++)
		bt[len-i-1]=b[i];
	int l1=strlen(a);
	int l2=strlen(b);
	int l=(strlen(a)>strlen(b))?strlen(a):strlen(b);
	int s=(strlen(a)<strlen(b))?strlen(a):strlen(b);
	for(int i=0;i<l;i++)
	{
		if(i<s)
		{
			if(((a[l1-1-i]-'0')+(b[l2-1-i]-'0')+f)>=10)
			{
				t[l-i-1]=(a[l1-1-i]-'0')+(b[l2-1-i]-'0')+f;
				f=1;
			}
			else
			{
				t[l-i-1]=(a[l1-1-i]-'0')+(b[l2-1-i]-'0')+f;
				f=0;
			}
		}
		else
		{
			if(l1==l2) break;
			else if(l1==l)
			{
				if(((a[l1-1-i]-'0')+f)>=10)
				{
					t[l-i-1]=(a[l1-1-i]-'0')+f;
					f=1;
				}
				else
				{
					t[l-i-1]=(a[l1-1-i]-'0')+f;
					f=0;
				}
			}
			else if(l2==l)
			{
				if(((b[l2-1-i]-'0')+f)>=10)
				{
					t[l-i-1]=(b[l2-1-i]-'0')+f;
					f=1;
				}
				else
				{
					t[l-i-1]=(b[l2-1-i]-'0')+f;
					f=0;
				}
			}
		}	
	}
	for(int i=1;i<=l;i++, tt*=10)
	{
		r+=t[l-i]*tt;
	}
	printf("%d", r);
	return 0;
}

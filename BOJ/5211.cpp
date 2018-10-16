#include <stdio.h>
#include <string.h>

int main()
{
	char a[101];
	char s[101];
	memset(a, 0, sizeof(a));
	memset(s, 0, sizeof(s));
	int count[7];
	char final;
	for(int i=0;i<7;i++)
		count[i]=0;
	int now=1;
	scanf("%s", a);
	int l=strlen(a);
	final=a[l-1];
	s[0]=a[0];
	for(int i=1;i<l;i++)
	{
		if(a[i-1]=='|')
		{
			s[now]=a[i];
			now++;
		}
	}
	l=strlen(s);
	for(int i=0;i<l;i++)
		count[s[i]-'A']++;
	if(count[0]+count[3]+count[4]>count[2]+count[5]+count[6]) printf("A-minor");
	else if(count[0]+count[3]+count[4]<count[2]+count[5]+count[6]) printf("C-major");
	else
	{
		if(final=='A' || final=='D' || final=='E') printf("A-minor");
		else if(final=='C' || final=='F' || final=='G') printf("C-major");
	}
	
	return 0;
}

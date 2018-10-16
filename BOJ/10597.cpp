#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int n;
char a[200];
bool visit[51];
int res[51];
int l;

void f(int pos, int index)
{
	if(index==n)
	{
		for(int i=0;i<n;i++)
			printf("%d ", res[i]);
		exit(0);
	}
	if((a[pos]-'0')!=0 && !visit[a[pos]-'0'])
	{
		visit[a[pos]-'0']=true;
		res[index]=a[pos]-'0';
		f(pos+1, index+1);
		visit[a[pos]-'0']=false;
	}
	int c=(a[pos]-'0')*10+(a[pos+1]-'0');
	if(c<=n && pos<l-1 && !visit[c])
	{
		visit[c]=true;
		res[index]=c;
		f(pos+2, index+1);
		visit[c]=false;
	}
}

int main()
{
	scanf("%s", a);
	l=strlen(a);
	if(l<10) n=l;
	else n=9+(l-9)/2;
	f(0, 0);
	
	return 0;
}

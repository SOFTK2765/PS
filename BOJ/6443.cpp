#include <stdio.h>
#include <string.h>

char a[1000], ns[1000], s[1000];
int b[60];
bool bc[60];

void f(int l, int pos)
{
	if(pos==l)
	{
		ns[pos]='\0';
		if(strcmp(s, ns)==0) return;
		strcpy(s, ns);
		printf("%s\n", ns);
		return;
	}
	for(int i=0;i<60;i++)
	{
		if(bc[i])
		{
			ns[pos]=i+'A';
			b[i]--;
			if(b[i]==0) bc[i]=false;
			f(l, pos+1);
			b[i]++;
			bc[i]=true;
		}
	}
}

int main()
{
	int n;
	scanf("%d", &n);
	for(int i=0;i<n;i++)
	{
		for(int i=0;i<60;i++)
		{
			b[i]=0;
			bc[i]=false;
		}
			
		scanf("%s", a);
		int l=strlen(a);
		for(int i=0;i<l;i++)
		{
			b[a[i]-'A']++;
			bc[a[i]-'A']=true;
		}
		f(l, 0);
	}
	
	return 0;
}

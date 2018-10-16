#include <stdio.h>
#include <string.h>

int main()
{
	char a[101];
	int b[26];
	for(int i=0;i<26;i++)
		b[i]=-1;
	scanf("%s", a);
	int l=strlen(a);
	for(int i=0;i<l;i++)
		if(b[a[i]-'a']==-1) b[a[i]-'a']=i;
	for(int i=0;i<26;i++)
		printf("%d ", b[i]);
	
	return 0;
}

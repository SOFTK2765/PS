#include <stdio.h>
#include <string.h>

char a[10001];

int main()
{
	scanf("%s", a);
	int l=strlen(a);
	int joi=0, ioi=0;
	for(int i=1;i<l;i++)
		if(a[i]=='O')
			if(a[i+1]=='I')
			{
				if(a[i-1]=='J') joi++;
				else if(a[i-1]=='I') ioi++;
				i++;
			}
	printf("%d\n%d", joi, ioi);
	
	return 0;
}

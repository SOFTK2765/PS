#include <stdio.h>

int main()
{
	char a[64];
	int b[64];
	int count=0;
	for(int i=0;i<64;i++)
		scanf("%c", &a[i]);
	for(int i=0;i<64;i++)
	{
		if((i/8)%2==1)
			b[i]=((i/8)+1)*8-((i%8)+1);
		else
			b[i]=i;
	}
	
	for(int i=0;i<64;i++)
	{
		if(a[i]=='F' && b[i]%2==0);
			count++;
	}
	printf("%d", count);
	
	return 0;
}

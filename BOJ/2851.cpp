#include <stdio.h>
#include <math.h>

int main()
{
	int a[10];
	int s=0;
	for(int i=0;i<10;i++)
		scanf("%d", &a[i]);
	for(int i=0;i<10;i++)
	{
		if((100-s)<-(100-s-a[i])) break;
		s+=a[i];
	}
	printf("%d", s);
	
	return 0;
}

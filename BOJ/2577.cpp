#include <stdio.h>
#include <math.h>

int main()
{
	int a, b, c, result, data;
	int n[10];
	
	for(int i=0;i<10;i++)
		n[i]=0;
	scanf("%d %d %d", &a, &b, &c);
	result = a*b*c;
	for(int i=0;;i++)
	{
		data=result%10;
		n[data]++;
		if(result/10==0) break;
		result/=10;
	}
	for(int i=0;i<10;i++)
		printf("%d\n", n[i]);
	
	return 0;
}

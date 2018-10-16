#include <stdio.h>

int main()
{
	int t, a, b, suma=0, sumb=0;
	scanf("%d", &t);
	for(int i=0;i<t;i++)
	{
		for(int j=0;j<9;j++)
		{
			scanf("%d %d", &a, &b);
			suma+=a;
			sumb+=b;
		}
		if(suma>sumb) printf("Yonsei\n");
		else if(suma<sumb) printf("Korea\n");
		else printf("Draw\n");
	}
	return 0;
}

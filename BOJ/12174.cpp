#include <stdio.h>

char a[8001];

int main()
{
	int t, b, n;
	scanf("%d", &t);
	for(int i=0;i<t;i++)
	{
		scanf("%d %s", &b, a);
		printf("Case #%d: ", i+1);
		for(int j=0;j<b;j++)
		{
			n=0;
			for(int k=0;k<8;k++)
			{
				n*=2;
				if(a[j*8+k]=='I') n++;
			}
			printf("%c", n);
		}
		printf("\n");
	}
	
	return 0;
}

#include <stdio.h>

int main()
{
	int n, h, m, d, p, sum=0;
	char a;
	scanf("%d", &n);
	for(int i=0;i<n;i++)
	{
		scanf("%d%c%d %d", &h, &a, &m, &d);
		while(1)
		{
			if(h>=19 || h<7)
				p=5;
			else if(h>=7 && h<19)
				p=10;
			for(int j=m;j<60;j++)
			{
				sum+=p;
				d--;
				if(d==0) break;
			}
			m=0;
			if(++h==24) h=0;
			if(d==0) break;
		}
	}
	printf("%d", sum);
	return 0;
}

#include <stdio.h>
z
int main()
{
	int t, m, n, x, y, nx, ny, count;
	scanf("%d", &t);
	for(int i=0;i<t;i++)
	{
		scanf("%d %d %d %d", &m, &n, &x, &y);
		nx=1;
		ny=1;
		count=1;
		while(1)
		{
			if(nx==x && ny==y)
			{
				printf("%d\n", count);
				break;
			}
			if(nx==0 && ny==0)
			{
				printf("%d\n", -1);
				break;
			}
			nx=(nx+1)%m;
			ny=(ny+1)%n;
			count++;
		}
	}
	
	return 0;
}

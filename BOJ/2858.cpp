#include <stdio.h>

int main()
{
	int r, b, esc=0;
	scanf("%d %d", &r, &b);
	for(int i=1;;i++)
	{
		for(int j=1;j<=i;j++)
		{
			if(i*j==r+b)
			{
				if(2*i+2*j-4==r)
				{
					printf("%d %d", i, j);
					esc=1;
					break;
				}
			}
		}
		if(esc==1) break;
	}
	
	return 0;
}

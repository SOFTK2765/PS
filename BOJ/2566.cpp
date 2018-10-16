#include <stdio.h>

int main()
{
	int a[9][9];
	int row, col, max=0;
	
	for(int i=0;i<9;i++)
	{
		for(int j=0;j<9;j++)
		{
			scanf("%d", &a[i][j]);
			if(a[i][j]>max)
			{
				max=a[i][j];
				row=i;
				col=j;
			}
		}
	}
	printf("%d\n%d %d", max, row+1, col+1);
	
	return 0;
}

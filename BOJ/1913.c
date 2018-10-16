#include <stdio.h>

typedef enum{up, right, down, left}direction;

int main()
{
	int n, i, j, searchNum;
	int row, col, value, searchNumRow, searchNumCol;
	int check = 0;
	int checkCount = 1;
	int checkMove = 0;
	direction dir = up;
	
	scanf("%d", &n);
	scanf("%d", &searchNum);
	
	int array[n][n];
	
	row = n/2;
	col = n/2;
	
	for(i=1;i<=(n*n);i++)
	{
		check++;
		array[row][col] = i;
		if(i==searchNum)
		{
			searchNumRow = row+1;
			searchNumCol = col+1;
		}
		
		
		
		switch(dir){
			case up:
				row--;
				break;
				
			case right:
				col++;
				break;
				
			case down:
				row++;
				break;
				
			case left:
				col--;
		}
		
		if(check==checkCount)
		{
			check=0;
			checkMove++;
			if(checkMove==2)
			{
				checkCount++;
				checkMove = 0;
			}
			dir = (dir+1)%4;
		}
	}
	
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d ", array[i][j]);
		}
		printf("\n");
	}
	
	printf("%d %d", searchNumRow, searchNumCol);
	
	return 0;
}

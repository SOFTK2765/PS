#include <stdio.h>
#include <math.h>
#include <string.h>

int main()
{
	int r, c, k;
	char a[10][11], s[19][20];
	memset(s, 0, sizeof(s));
	scanf("%d %d", &r, &c);
	for(int i=0;i<r;i++)
		scanf("%s", a[i]);
	scanf("%d", &k);
	switch(k/45)
	{
		case 0:
		case 8:
			for(int i=0;i<r;i++)
				printf("%s\n", a[i]);
			break;
		case 1:
			int small=r<c?r:c, big=r>c?r:c;
			for(int i=0;i<small;i++)
				for(int j=0;j<i+1;j++)
					s[i][j]=a[i-j][j];
			for(int i=0;i<big-small;i++) // 이거 6 3 으로 했을때 잘못출력됨. 
				for(int j=0;j<small;j++)
					s[small+i][j]=a[small-1-j][j+1+i];
			for(int i=0;i<small-1;i++)
				for(int j=0;j<small-1-i;j++)
					s[big+i][j]=a[small-1][big-small+1+j+i];
			for(int i=0;i<r+c-1;i++)
			{
				for(int j=0;j<abs(r-1-i);j++)
					printf(" ");
				for(int j=0;;j++)
				{
					printf("%c", s[i][j]);
					if(s[i][j+1]=='\0') break;
					printf(" ");
				}
				printf("\n");
			}
			break;
/*		case 2: 
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:*/
	}
	
	return 0;
}

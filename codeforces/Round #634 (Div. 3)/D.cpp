#include <bits/stdc++.h>

using namespace std;

int a[10][10];

int main()
{
	int t;
	scanf(" %d", &t);
	while(t--)
	{
		for(int i=0;i<9;i++)
			for(int j=0;j<9;j++)
				scanf(" %1d", &a[i][j]);
		a[0][0] = a[0][1];
		a[3][1] = a[3][2];
		a[6][2] = a[6][0];
		a[1][3] = a[1][4];
		a[4][4] = a[4][5];
		a[7][5] = a[7][3];
		a[2][6] = a[2][7];
		a[5][7] = a[5][8];
		a[8][8] = a[8][6];
		for(int i=0;i<9;i++)
		{
			for(int j=0;j<9;j++)
				printf("%d", a[i][j]);
			printf("\n");
		}
	}

	return 0;
}
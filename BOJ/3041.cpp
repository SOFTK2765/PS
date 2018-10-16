#include <stdio.h>
#include <math.h>
#include <string.h>

int main()
{
	char a[4][5], ans[4][5];
	int alpha=65, sum=0;
	memset(a, 0, sizeof(a));
	memset(ans, 0, sizeof(ans));
	for(int i=0;i<4;i++)
		scanf("%s", a[i]);
	for(int i=0;i<4;i++)
		for(int j=0;j<4;j++)
			ans[i][j]=alpha++;
	ans[3][3]='.';
	for(int i=0;i<4;i++)
		for(int j=0;j<4;j++)
			for(int k=0;k<4;k++)
				for(int l=0;l<4;l++)
					if(a[i][j]==ans[k][l] && a[i][j]!='.') sum+=(abs(i-k)+abs(j-l));
	printf("%d", sum);
	
	return 0;
}

#include <stdio.h>
#include <string.h>

int main()
{
	char a[6][4];
	char ta[3][4];
	int p, esc=0;
	for(int i=0;i<6;i++)
		scanf("%s", a[i]);
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			if(i==j) continue;
			p=3-i-j;
			for(int k=0;k<3;k++)
			{
				for(int l=0;l<3;l++)
				{
					if(k==0) ta[k][l]=a[i*2][l];
					else if(k==1) ta[k][l]=a[j*2][l];
					else if(k==2) ta[k][l]=a[p*2][l];
				}
			}
			for(int k=0;k<3;k++)
			{
				int l;
				for(l=0;l<3;l++)
					if(ta[k][l]!=ta[l][k]) break;
				if(ta[k][l]!=ta[l][k]) break;
				if(k==2)
				{
					for(l=0;l<3;l++)
						printf("%s\n", ta[l]);
					esc=1;
				}
				if(esc==1) break;
			}
			memset(ta, 0, sizeof(ta));
			if(esc==1) break;
		}
		if(esc==1) break;
	}
	if(esc!=1) printf("%d", 0);

	return 0;
}

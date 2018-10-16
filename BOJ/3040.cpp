#include <stdio.h>

int main()
{
	int a[9], b[9];
	int s;
	for(int i=0;i<9;i++)
		scanf("%d", &a[i]);
	for(int i=0;i<8;i++)
	{
		for(int j=i+1;j<9;j++)
		{
			s=0;
			for(int k=0;k<9;k++)
				b[k]=a[k];
			b[i]=0;
			b[j]=0;
			for(int k=0;k<9;k++)
				s+=b[k];
			if(s==100) break;
		}
		if(s==100) break;
	}
	for(int i=0;i<9;i++)
		if(b[i]!=0) printf("%d\n", b[i]);
	
	return 0;
}

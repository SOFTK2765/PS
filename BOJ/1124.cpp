#include <stdio.h>

bool arr[50001];

int main()
{
	for(int i=2;i<=50000;i++)
		for(int j=2;i*j<=50000;j++)
			arr[i*j]=true;
	arr[0]=true;
	arr[1]=true;
	int a, b, ni, count, esc, scount=0;
	scanf("%d %d", &a, &b);
	for(int i=a;i<=b;i++)
	{
		ni=i;
		count=0;
		esc=0;
		while(1)
		{
			for(int j=2;j<=ni;j++)
			{
				if(ni%j==0)
				{
					ni/=j;
					count++;
				}
				if(ni==1)
				{
					esc=1;
					break;
				}
			}
			if(esc==1) break;	
		}
		if(arr[count]==false) scount++;
	}
	printf("%d", scount);
	
	return 0;
}

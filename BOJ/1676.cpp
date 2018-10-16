#include <stdio.h>

int main()
{
	int n, result, count2=0, count5=0, temp;
	scanf("%d", &n);

	for(int i=1;i<=n;i++)
	{
		temp=i;
		for(int j=0;;j++)
		{
			if(temp%2==0)
			{
				count2++;
				temp/=2;
				continue;
			}
			if(temp%5==0)
			{
				count5++;
				temp/=5;
				continue;
			}
			break;
		}
	}
	if(count2<count5) printf("%d", count2);
	else printf("%d", count5);
	
	return 0;
}


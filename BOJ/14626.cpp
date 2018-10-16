#include <stdio.h>

int main()
{
	char a[14];
	int sum=0, check, answer;
	scanf("%s", a);
	for(int i=0;i<12;i++)
	{
		if(a[i]!='*')
		{
			if(i%2==1) sum+=(a[i]-'0')*3;
			else sum+=(a[i]-'0');
		}
		else check=i;
	}
	for(int i=0;i<10;i++)
	{
		if(check%2==1)
		{
			if((10-(sum+i*3)%10)%10==(a[12]-'0'))
			{
				answer=i;
				break;
			}
		}
		else
		{
			if((10-(sum+i)%10)%10==(a[12]-'0'))
			{
				answer=i;
				break;
			}
		}
	}
	printf("%d", answer);
	
	return 0;
}

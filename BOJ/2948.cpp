#include <stdio.h>

char day[7][10]={{"Thursday"}, {"Friday"}, {"Saturday"}, {"Sunday"}, {"Monday"}, {"Tuesday"}, {"Wednesday"}};

int main()
{
	int d, m, s;
	scanf("%d %d", &d, &m);
	for(int i=1;i<m;i++)
	{
		if(i==1 || i==3 || i==5 || i==7 || i==8 || i==10 || i==12) s+=31;
		else if(i==2) s+=28;
		else s+=30;
	}
	s+=d-1;
	s%=7;
	printf("%s", day[s]);
	
	return 0;
}

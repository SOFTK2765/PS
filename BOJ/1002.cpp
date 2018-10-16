#include <stdio.h>
#include <math.h>

int main()
{
	int t, x1, x2, y1, y2, r1, r2;
	scanf("%d", &t);
	for(int i=0;i<t;i++)
	{
		scanf("%d %d %d %d %d %d", &x1, &y1, &r1, &x2, &y2, &r2);
		if(sqrt(pow((x2-x1), 2)+pow((x2-x1), 2))==r1+r2) printf("%d\n", 1);
		else if(sqrt(pow((x2-x1), 2)+pow((x2-x1), 2))>r1+r2) printf("%d\n", 0);
		else if(x1==x2 && y1==y2 && r1!=r2) printf("%d", 0);
		else if(x1==x2 && y1==y2 && r1==r2) printf("%d\n", -1);
		else printf("%d\n", 2);
	}
	
	return 0;
}

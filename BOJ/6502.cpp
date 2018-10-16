#include <stdio.h>
#include <math.h>

int main()
{
	int r, w, l;
	for(int i=1;;i++)
	{
		scanf("%d", &r);
		if(r==0) break;
		scanf("%d %d", &w, &l);
		if(r*2>=sqrt(pow(w, 2)+pow(l, 2))) printf("Pizza %d fits on the table.\n", i);
		else printf("Pizza %d does not fit on the table.\n", i);
	}
	
	return 0;
}

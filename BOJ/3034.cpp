#include <stdio.h>

int main()
{
	int n, w, h, a;
	scanf("%d %d %d", &n, &w, &h);
	for(int i=0;i<n;i++)
	{
		scanf("%d", &a);
		if(w*w+h*h>=a*a) printf("DA\n");
		else printf("NE\n");
	}
	
	return 0;
}

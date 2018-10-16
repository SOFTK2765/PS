#include <stdio.h>
#include <math.h>

int main()
{
	double a, b, c;
	for(int i=1;;i++)
	{
		scanf("%d %d %d", &a, &b, &c);
		if(a==0 && b==0 && c==0) break;
		if(a==-1 && c<=b) printf("Triangle #%d\nImpossible\n", i); 
		else if(a==-1) printf("Triangle #%d\na = %.3f\n", i, sqrt(pow(c, 2)-pow(b, 2)));
		if(b==-1 && c<=a) printf("Triangle #%d\nImpossible\n", i); 
		else if(b==-1) printf("Triangle #%d\nb = %.3f\n", i, sqrt(pow(c, 2)-pow(a, 2)));
		if(c==-1) printf("Triangle #%d\nc = %.3f\n", i, sqrt(pow(a, 2)+pow(b, 2)));
		printf("\n");
	}
	
	return 0;
}

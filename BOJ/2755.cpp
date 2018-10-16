#include <stdio.h>

int main()
{
	int n;
	scanf("%d", &n);
	char a[101];
	int b, bc=0;;
	char c[3];
	float s, sum=0;
	for(int i=0;i<n;i++)
	{
		scanf("%s %d %s", a, &b, c);
		if(c[0]=='A') s=4;
		if(c[0]=='B') s=3;
		if(c[0]=='C') s=2;
		if(c[0]=='D') s=1;
		if(c[0]=='F') s=0;
		if(c[1]=='+') s+=0.3;
		if(c[1]=='-') s-=0.3;
		sum+=s*b;
		bc+=b;
	}
	printf("%.2f", sum/bc);
	
	return 0;
}

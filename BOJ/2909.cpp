#include <stdio.h>

int main()
{
	int c, n, t=1;
	scanf("%d %d", &c, &n);
	for(int i=0;i<n;i++)
		t*=10;
	printf("%d", static_cast<int>(c+0.5*static_cast<float>(t))/t*t);
	
	return 0;
}

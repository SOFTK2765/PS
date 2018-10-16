#include <stdio.h>

int main()
{
	int s, v1, v2, t1, t2;
	scanf("%d %d %d %d %d", &s, &v1, &v2, &t1, &t2);
	if(t1*2+v1*s<t2*2+v2*s) printf("First");
	else if(t1*2+v1*s>t2*2+v2*s) printf("Second");
	else printf("Friendship");
	
	return 0;
}

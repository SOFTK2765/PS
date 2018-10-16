#include <stdio.h>

int main()
{
	int h1, h2, m1, m2, f, count=0;
	scanf("%d %d %d %d %d", &h1, &m1, &h2, &m2, &f);
	for(int i=0;;i++)
	{
		if(h1/10==f || h1%10==f || m1/10==f || m1%10==f) count++;
		if(h1==h2 && m1==m2) break;
		m1++;
		if(m1==60)
		{
			m1=0;
			h1++;
		}
	}
	printf("%d", count);
	
	return 0;
}

#include <stdio.h>

int main()
{
	int n;
	int a, b, c, as=0, bs=0, cs=0;
	int ap[3], bp[3], cp[3];
	for(int i=0;i<3;i++)
	{
		ap[i]=0;
		bp[i]=0;
		cp[i]=0;
	}
	scanf("%d", &n);
	for(int i=0;i<n;i++)
	{
		scanf("%d %d %d", &a, &b, &c);
		switch(a)
		{
			case 1:
				ap[0]++;
				break;
			case 2:
				ap[1]++;
				break;
			case 3:
				ap[2]++;
		}
		switch(b)
		{
			case 1:
				bp[0]++;
				break;
			case 2:
				bp[1]++;
				break;
			case 3:
				bp[2]++;
		}
		switch(c)
		{
			case 1:
				cp[0]++;
				break;
			case 2:
				cp[1]++;
				break;
			case 3:
				cp[2]++;
		}
		as+=a;
		bs+=b;
		cs+=c;
	}
	
	if(as>bs && as>cs) printf("%d %d", 1, as);
	else if(bs>as && bs>cs) printf("%d %d", 2, bs);
	else if(cs>as && cs>bs) printf("%d %d", 3, cs);
	else
	{
		if(as==bs && as>cs)
		{
			if(ap[2] > bp[2]) printf("%d %d", 1, as);
			else if(ap[2] < bp[2]) printf("%d %d", 2, bs);
			else
			{
				if(ap[1] > bp[1]) printf("%d %d", 1, as);
				else if(ap[1] < bp[1]) printf("%d %d", 2, bs);
				else printf("%d %d", 0, as);
			}
		}
		else if(bs==cs && bs>as)
		{
			if(bp[2] > cp[2]) printf("%d %d", 2, bs);
			else if(bp[2] < cp[2]) printf("%d %d", 3, cs);
			else
			{
				if(bp[1] > cp[1]) printf("%d %d", 2, bs);
				else if(bp[1] < cp[1]) printf("%d %d", 3, cs);
				else printf("%d %d", 0, bs);
			}
		}
		else if(cs==as && cs>bs)
		{
			if(cp[2] > ap[2]) printf("%d %d", 3, cs);
			else if(cp[2] < ap[2]) printf("%d %d", 1, as);
			else
			{
				if(cp[1] > ap[1]) printf("%d %d", 3, cs);
				else if(cp[1] < ap[1]) printf("%d %d", 1, as);
				else printf("%d %d", 0, cs);
			}
		}
		else
		{
			if(ap[2] > bp[2] && ap[2] > cp[2]) printf("%d %d", 1, as);
			else if(bp[2] > ap[2] && bp[2] > cp[2]) printf("%d %d", 2, bs);
			else if(cp[2] > ap[2] && cp[2] > bp[2]) printf("%d %d", 3, cs);
			else
			{
				if(ap[1] > bp[1] && ap[1] > cp[1]) printf("%d %d", 1, as);
				else if(bp[1] > ap[1] && bp[1] > cp[1]) printf("%d %d", 2, bs);
				else if(cp[1] > ap[1] && cp[1] > bp[1]) printf("%d %d", 3, cs);
				else printf("%d %d", 0, as);
			}
		}
	}
	return 0;
}

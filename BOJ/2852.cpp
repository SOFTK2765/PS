#include <stdio.h>

int t[3], ts[3];

int main()
{
	int n, nt, m, s, sm=0, ss=0;
	char trash;
	scanf("%d", &n);
	for(int i=0;i<n;i++)
	{
		scanf("%d %d%c%d", &nt, &m, &trash, &s);
		s+=m*60;
		if(t[1]>t[2] && i>=1) ts[1]+=s-ss;
		else if(t[1]<t[2] && i>=1) ts[2]+=s-ss;
		t[nt]++;
		ss=s;
	}
	if(t[1]>t[2]) ts[1]+=48*60-ss;
	else if(t[1]<t[2]) ts[2]+=48*60-ss;
	printf("%.2d%c%.2d\n", ts[1]/60, trash, ts[1]%60);
	printf("%.2d%c%.2d", ts[2]/60, trash, ts[2]%60);
	
	return 0;
}

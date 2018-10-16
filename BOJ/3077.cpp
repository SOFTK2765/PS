#include <stdio.h>
#include <string.h>

int main()
{
	int n, count=0;
	char answer[2500][16], submit[2500][16];
	int submitnum[2500];
	memset(answer, 0, sizeof(answer));
	memset(submit, 0, sizeof(submit));
	for(int i=0;i<2500;i++)
		submitnum[i]=0;
	scanf("%d", &n);
	for(int i=0;i<n;i++)
		scanf("%s", answer[i]);
	for(int i=0;i<n;i++)
		scanf("%s", submit[i]);
	for(int i=0;i<n;i++)
		for(int j=0;j<n;j++)
			if(strcmp(submit[i], answer[j])==0) submitnum[i]=j;
	for(int i=0;i<n-1;i++)
		for(int j=i+1;j<n;j++)
			if(submitnum[i]<submitnum[j]) count++;
	printf("%d/%d", count, (n*(n-1)/2));
	
	return 0;
}

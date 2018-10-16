#include <stdio.h>
#include <string.h>

char h[100001], n[11], temp[100001];

int main()
{
	int count=0;
	scanf("%s %s", h, n);
	strcpy(temp, strstr(h, n));
	memset(h, 0, sizeof(h));
	strcpy(h, temp);
	memset(temp, 0, sizeof(temp));
	if(h=='\0') return 0;
	count++;
	while(1)
	{
		strcpy(temp, strstr(h, n));
		strcpy(h, temp+1);
		printf("%s\n", h);
		memset(temp, 0, sizeof(temp));
		if(h=='\0') break;
		count++;
	}
	printf("%d", count);
	
	return 0;
}

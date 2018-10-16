#include <stdio.h>
#include <string.h>

int main()
{
	int n, min;
	char a[20000][51];
	char temp[51];
	scanf("%d", &n);
	for(int i=0;i<n;i++)
	{
		scanf("%s", a[i]);
	}
	for(int i=0;i<n-1;i++)
	{
		min=i;
		for(int j=i+1;j<n;j++)
			if(strlen(a[min])>strlen(a[j])) min=j;
			else if(strlen(a[min])==strlen(a[j]))
				for(int k=0;k<strlen(a[min]);k++)
					if(a[min]>a[j])
					{
						min=j;
						break;
					}
		strcpy(temp, a[min]);
		memset(a[min], 0, sizeof(a[min]));
		strcpy(a[min], a[i]);
		memset(a[i], 0, sizeof(a[i]));
		strcpy(a[i], temp);
		memset(temp, 0, sizeof(temp));
	}
	for(int i=0;i<n;i++)
		printf("%s\n", a[i]);
	
	return 0;
}

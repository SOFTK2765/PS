#include <stdio.h>
#include <string.h>
#include <algorithm>

int a[26], b[26];
char s1[1001], s2[1001];

int main()
{
	scanf("%s %s", s1, s2);
	int l=strlen(s1);
	for(int i=0;i<l;i++)
		a[s1[i]-'a']++;
	l=strlen(s2);
	for(int i=0;i<l;i++)
		b[s2[i]-'a']++;
	int sum=0;
	for(int i=0;i<26;i++)
		sum+=abs(a[i]-b[i]);
	printf("%d", sum);
	
	return 0;
}

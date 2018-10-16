#include <stdio.h>
#include <string.h>

int main()
{
	char a[1000000];
	int count[26], maxcount[26];
	int max, sum=0;
	
	scanf("%s", a);
	for(int i=0;i<strlen(a);i++)
	{
		switch(a[i])
		{
			case 'a': case 'A':
				count[0]++;
				break;
			case 'b': case 'B':
				count[1]++;
				break;
			case 'c': case 'C':
				count[2]++;
				break;
			case 'd': case 'D':
				count[3]++;
				break;
			case 'e': case 'E':
				count[4]++;
				break;
			case 'f': case 'F':
				count[5]++;
				break;
			case 'g': case 'G':
				count[6]++;
				break;
			case 'h': case 'H':
				count[7]++;
				break;
			case 'i': case 'I':
				count[8]++;
				break;
			case 'j': case 'J':
				count[9]++;
				break;
			case 'k': case 'K':
				count[10]++;
				break;
			case 'l': case 'L':
				count[11]++;
				break;
			case 'm': case 'M':
				count[12]++;
				break;
			case 'n': case 'N':
				count[13]++;
				break;
			case 'o': case 'O':
				count[14]++;
				break;
			case 'p': case 'P':
				count[15]++;
				break;
			case 'q': case 'Q':
				count[16]++;
				break;
			case 'r': case 'R':
				count[17]++;
				break;
			case 's': case 'S':
				count[18]++;
				break;
			case 't': case 'T':
				count[19]++;
				break;
			case 'u': case 'U':
				count[20]++;
				break;
			case 'v': case 'V':
				count[21]++;
				break;
			case 'w': case 'W':
				count[22]++;
				break;
			case 'x': case 'X':
				count[23]++;
				break;
			case 'y': case 'Y':
				count[24]++;
				break;
			case 'z': case 'Z':
				count[25]++;
				break;
		}
		
	}
	max=-1;
	for(int i=0;i<26;i++) maxcount[i]=0;
	for(int i=0;i<26;i++)
	{
		if(count[i]>count[max])
		{
			max=i;
			for(int j=0;j<i;j++) maxcount[j]=0;
		}
		else if(count[i]==count[max]) maxcount[i]=1;
	}
	for(int i=0;i<26;i++) sum+=maxcount[i];
	if(sum==0) printf("%c", max+65);
	else printf("?");
	
	return 0;
}

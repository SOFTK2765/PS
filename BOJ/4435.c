#include <stdio.h>

#define GANTYPE 6
#define SATYPE 7

typedef enum {hobit=1, human=2, elf=3, dwarf=3, eagle=4, wizard=10}gandalf;
typedef enum {orc=1, people=2, wolf=2, goblin=2, ureokhigh=3, troll=5, magician=10}sauron;

int main()
{
	gandalf ganArmy;
	sauron saArmy;
	int a[GANTYPE], b[SATYPE];
	int t, i, j;
	int ganValue, saValue;
	
	scanf("%d", &t);
	for(i=0;i<t;i++)
	{
		for(j=0;j<GANTYPE;j++)
		{
			scanf("%d", &a[j]);
		}
		ganValue = a[0]*hobit + a[1]*human + a[2]*elf + a[3]*dwarf + a[4]*eagle + a[5]*wizard;
		
		for(j=0;j<SATYPE;j++)
		{
			scanf("%d", &b[j]);
		}
		saValue = b[0]*orc + b[1]*people + b[2]*wolf + b[3]*goblin + b[4]*ureokhigh + b[5]*troll + b[6]*magician;
		
		if(ganValue>saValue) printf("Battle %d: Good triumphs over Evil\n", i+1);
		else if(ganValue<saValue) printf("Battle %d: Evil eradicates all trace of Good\n", i+1);
		else printf("Battle %d: No victor on this battle field\n", i+1);
	}
	
	
	return 0;
}

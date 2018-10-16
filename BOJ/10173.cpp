#include <bits/stdc++.h>

using namespace std;

const char name[16][5] = {"nemo", "nemO", "neMo", "neMO", "nEmo", "nEmO", "nEMo", "nEMO", "Nemo", "NemO", "NeMo", "NeMO", "NEmo", "NEmO", "NEMo", "NEMO"};

char a[81];

int main()
{
    while(1)
    {
        gets(a);
        if(strcmp(a, "EOI")==0) break;
        for(int i=0;i<16;i++)
        {
            if(strstr(a, name[i])!=NULL)
                {
                    printf("Found\n");
                    goto end;
                }
            if(i==15) printf("Missing\n");
        }
        end:
        continue;
    }

    return 0;
}
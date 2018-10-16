#include <bits/stdc++.h>

using namespace std;

char a[101];

int main()
{
    while(1)
    {
        memset(a, 0, sizeof(a));
        scanf("%s ", a);
        if(strcmp(a, "START")==0)
        {
            while(1)
            {
                memset(a, 0, sizeof(a));
                scanf("%s ", a);
                if(strcmp(a, "END")==0) break;
                int l = strlen(a);
                for(int i=0;i<l;i++)
                    if('A'<=a[i] && a[i]<='Z') printf("%c", (a[i]-'A'+21)%26+'A');
                    else printf("%c", a[i]);
                printf(" ");
            }
            printf("\n");
        }
        else break;
    }

    return 0;
}
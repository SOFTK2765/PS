#include <bits/stdc++.h>

using namespace std;

char a[27];

int main()
{
    int t;
    scanf("%d", &t);
    while(t--)
    {
        memset(a, 0, sizeof(a));
        scanf(" %s", a);
        int l = strlen(a);
        if(l%2==0)
        {
            for(int i=0;i<l/2;i++)
                printf("%c", a[i*2]);
            printf("\n");
            for(int i=0;i<l/2;i++)
                printf("%c", a[i*2+1]);
            printf("\n");
        }
        else
        {
            for(int i=0;i<l;i++)
                printf("%c", a[(i*2)%l]);
            printf("\n");
            for(int i=0;i<l;i++)
                printf("%c", a[((i*2)+1)%l]);
            printf("\n");
        }
    }

    return 0;
}
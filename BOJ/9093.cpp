#include <bits/stdc++.h>

using namespace std;

char a[1001];

int main()
{
    int t;
    scanf("%d ", &t);
    for(int i=0;i<t;i++)
    {
        memset(a, 0, sizeof(a));
        gets(a);
        int l = strlen(a);
        int spos = 0;
        for(int j=0;j<l+1;j++)
        {
            if(a[j]==' ' || a[j]==0)
            {
                for(int k=j-1;k>=spos;k--)
                printf("%c", a[k]);
                printf(" ");
                spos = j+1;
            }
        }
        printf("\n");
    }

    return 0;
}
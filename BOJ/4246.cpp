#include <bits/stdc++.h>

using namespace std;

char a[201];
char table[201][201];

int main()
{
    while(1)
    {
        int n;
        scanf(" %d", &n);
        if(n==0) break;
        memset(a, 0, sizeof(a));
        scanf(" %s", a);
        int l = strlen(a);
        memset(table, 0, sizeof(table));
        for(int i=0;i<l;i++)
        {
            if((i/n)%2==0) table[i/n][i%n] = a[i];
            else table[i/n][n-1-(i%n)] = a[i];
        }
        for(int i=0;i<n;i++)
            for(int j=0;j<l/n;j++)
                printf("%c", table[j][i]);
        printf("\n");
    }

    return 0;
}
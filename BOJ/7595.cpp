#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    while(1)
    {
        scanf(" %d", &n);
        if(n==0) break;
        for(int i=1;i<=n;i++)
        {
            for(int j=0;j<i;j++)
                printf("*");
            printf("\n");
        }
    }

    return 0;
}
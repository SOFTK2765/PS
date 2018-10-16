#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    scanf("%d", &t);
    while(t--)
    {
        int n;
        scanf(" %d", &n);
        printf("Pairs for %d: ", n);
        for(int i=1;i<=n/2;i++)
        {
            if(n-i>0 && n-i!=i) printf("%d %d", i, n-i);
            else break;
            if(i+1>=n-i-1) break;
            printf(", ");
        }
        printf("\n");
    }

    return 0;
}
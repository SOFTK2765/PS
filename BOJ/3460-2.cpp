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
        for(int i=0;n>0;i++, n >>= 1)
            if(n&1) printf("%d ", i);
        printf("\n");
    }

    return 0;
}
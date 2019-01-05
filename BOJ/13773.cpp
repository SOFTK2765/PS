#include <bits/stdc++.h>

using namespace std;

int main()
{
    while(1)
    {
        int n;
        scanf(" %d", &n);
        if(n==0) break;
        printf("%d ", n);
        if(n%4==0 && n>=1896)
        {
            if((1914<=n && n<=1918) || (1939<=n && n<=1945)) printf("Games cancelled\n");
            else if(n>=2024) printf("No city yet chosen\n");
            else printf("Summer Olympics\n");
        }
        else printf("No summer games\n");
    }

    return 0;
}
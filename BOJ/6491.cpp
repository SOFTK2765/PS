#include <bits/stdc++.h>

using namespace std;

int main()
{
    while(1)
    {
        int n;
        scanf(" %d", &n);
        if(n==0) break;
        int sum = 0;
        for(int i=1;i<=n/2;i++)
            if(n%i==0) sum += i;
        if(n==sum) printf("%d PERFECT\n", n);
        else if(n<sum) printf("%d ABUNDANT\n", n);
        else printf("%d DEFICIENT\n", n);
    }

    return 0;
}
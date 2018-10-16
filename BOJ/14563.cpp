#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    scanf("%d", &t);
    for(int i=0;i<t;i++)
    {
        int n;
        scanf(" %d", &n);
        int sum = 0;
        for(int i=1;i<n;i++)
            if(n%i==0) sum += i;
        printf("%s\n", sum>n?"Abundant":sum<n?"Deficient":"Perfect");
    }

    return 0;
}
#include <bits/stdc++.h>

using namespace std;

int main()
{
    while(1)
    {
        int n;
        scanf(" %d", &n);
        if(n==0) break;
        do
        {
            int tsum = 0;
            while(n)
            {
                tsum += n%10;
                n /= 10;
            }
            n = tsum;
        }while(n/10);
        printf("%d\n", n);
    }

    return 0;
}
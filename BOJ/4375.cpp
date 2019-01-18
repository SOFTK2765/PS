#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    while(~scanf(" %d", &n))
    {
        int tmp = 1, sum = 0, cnt = 0;
        while(1)
        {
            sum += (tmp%n);
            cnt++;
            if(sum%n==0) break;
            (tmp %= n) *= 10;
        }
        printf("%d\n", cnt);
    }

    return 0;
}
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
        int mx = 1;
        while(n!=1)
        {
            mx = max(mx, n);
            if(n%2==0) n /= 2;
            else n = n*3+1;
        }
        printf("%d\n", mx);
    }

    return 0;
}
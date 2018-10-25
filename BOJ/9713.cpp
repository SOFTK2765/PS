#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    scanf(" %d", &t);
    while(t--)
    {
        int n;
        scanf(" %d", &n);
        int sum = 0;
        for(int i=1;i<=n;i+=2)
            sum += i;
        printf("%d\n", sum);
    }

    return 0;
}
#include <bits/stdc++.h>

using namespace std;

int t[302];

int main()
{
    int tc;
    scanf("%d", &tc);
    for(int i=1;i<=301;i++)
        t[i] = t[i-1]+i;
    while(tc--)
    {
        int n;
        scanf(" %d", &n);
        int sum = 0;
        for(int i=1;i<=n;i++)
            sum += i*t[i+1];
        printf("%d\n", sum);
    }

    return 0;
}
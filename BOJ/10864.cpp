#include <bits/stdc++.h>

using namespace std;

int s[1001] = {};

int main()
{
    int n, m;
    scanf("%d %d", &n, &m);
    while(m--)
    {
        int a, b;
        scanf(" %d %d", &a, &b);
        s[a]++;
        s[b]++;
    }
    for(int i=1;i<=n;i++)
        printf("%d\n", s[i]);

    return 0;
}
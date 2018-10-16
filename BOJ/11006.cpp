#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    scanf("%d", &t);
    while(t--)
    {
        int n, m;
        scanf(" %d %d", &n, &m);
        printf("%d %d\n", 2*m-n, n-m);
    }

    return 0;
}
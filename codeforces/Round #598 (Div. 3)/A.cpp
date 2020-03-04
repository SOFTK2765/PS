#include <bits/stdc++.h>

using namespace std;

int main()
{
    int q;
    scanf("%d", &q);
    while(q--)
    {
        int a, b, n, s;
        scanf(" %d %d %d %d", &a, &b, &n, &s);
        printf("%s\n", (s-(a>s/n?s/n:a)*n)<=b?"YES":"NO");
    }

    return 0;
}
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    scanf("%d", &t);
    while(t--)
    {
        int v, e;
        scanf(" %d %d", &v, &e);
        printf("%d\n", 2-v+e);
    }

    return 0;
}
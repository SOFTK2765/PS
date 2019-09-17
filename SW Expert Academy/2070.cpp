#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    scanf("%d", &t);
    for(int tc=1;tc<=t;tc++)
    {
        int a, b;
        scanf(" %d %d", &a, &b);
        printf("#%d %c\n", tc, a>b?'>':a<b?'<':'=');
    }

    return 0;
}
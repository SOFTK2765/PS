#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    scanf("%d", &t);
    for(int i=0;i<t;i++)
    {
        int n, m;
        scanf(" %d %d", &n, &m);
        printf("%d\n", 1+(n-m)*m);
    }

    return 0;
}
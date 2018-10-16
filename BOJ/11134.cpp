#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    scanf("%d", &t);
    while(t--)
    {
        int n, c;
        scanf("%d %d", &n, &c);
        n%c==0?printf("%d\n", n/c):printf("%d\n", n/c+1);
    }

    return 0;
}
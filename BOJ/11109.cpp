#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    scanf("%d", &t);
    for(int i=0;i<t;i++)
    {
        int d, n, s, p;
        scanf(" %d %d %d %d", &d, &n, &s, &p);
        printf("%s\n", (d+p*n<s*n)?"parallelize":((d+p*n>s*n)?"do not parallelize":"does not matter"));
    }

    return 0;
}
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    int big = a>b?a:b;
    for(int i=1;i<big;i++)
        if(a%i==0 && b%i==0) printf("%d %d %d\n", i, a/i, b/i);

    return 0;
}
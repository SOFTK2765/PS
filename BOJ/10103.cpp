#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    int s1 = 100, s2 = 100;
    scanf("%d", &n);
    for(int i=0;i<n;i++)
    {
        int a, b;
        scanf("%d %d", &a, &b);
        if(a==b) continue;
        if(a>b) s2 -= a;
        else s1 -= b;
    }
    printf("%d\n%d", s1, s2);

    return 0;
}
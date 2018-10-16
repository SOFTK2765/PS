#include <bits/stdc++.h>

using namespace std;

char a[31];

int main()
{
    int n;
    scanf("%d ", &n);
    for(int i=0;i<n;i++)
    {
        memset(a, 0, sizeof(a));
        gets(a);
        if('a'<=a[0] && a[0]<='z') a[0] -= ('a'-'A');
        puts(a);
    }

    return 0;
}
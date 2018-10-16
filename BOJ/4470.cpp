#include <bits/stdc++.h>

using namespace std;

char a[51];

int main()
{
    int n;
    scanf("%d ", &n);
    for(int i=0;i<n;i++)
    {
        memset(a, 0, sizeof(a));
        gets(a);
        printf("%d. %s\n", i+1, a);
    }

    return 0;
}
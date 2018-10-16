#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    scanf("%d", &t);
    while(t--)
    {
        int a;
        scanf(" %d", &a);
        int i;
        for(i=0;a>=i+i*i;i++);
        printf("%d\n", i-1);
    }

    return 0;
}
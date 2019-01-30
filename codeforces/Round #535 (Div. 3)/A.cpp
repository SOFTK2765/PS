#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    scanf("%d", &n);
    for(int i=0;i<n;i++)
    {
        int a, b, c, d;
        scanf(" %d %d %d %d", &a, &b, &c, &d);
        printf("%d ", a);
        for(int j=c;j<=d;j++)
            if(j!=a)
            {
                printf("%d\n", j);
                break;
            }
    }

    return 0;
}
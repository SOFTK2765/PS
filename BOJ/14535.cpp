#include <bits/stdc++.h>

using namespace std;

const char mon[13][4] = {"", "Jan", "Feb", "Mar", "Apr", "May", "Jun", "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"};

int a[13];

int main()
{
    int t = 0;
    while(1)
    {
        t++;
        for(int i=0;i<13;i++)
            a[i] = 0;
        int n;
        scanf("%d", &n);
        if(n==0) break;
        int d, m, y;
        for(int i=0;i<n;i++)
        {
            scanf(" %d %d %d", &d, &m, &y);
            a[m]++;
        }
        printf("Case #%d:\n", t);
        for(int i=1;i<13;i++)
        {
            printf("%s:", mon[i]);
            for(int j=0;j<a[i];j++)
                printf("*");
            printf("\n");
        }
    }

    return 0;
}
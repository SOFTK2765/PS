#include <bits/stdc++.h>

using namespace std;

int a[51];

int main()
{
    int t = 0;
    while(++t)
    {
        int n;
        scanf(" %d", &n);
        if(n==0) break;
        for(int i=0;i<n;i++)
            scanf(" %d", &a[i]);
        int sum = 0;
        for(int i=0;i<n;i++)
            sum += a[i];
        int cm = sum/n;
        sum = 0;
        for(int i=0;i<n;i++)
            if(a[i]>cm) sum += (a[i]-cm);
        printf("Set #%d\nThe minimum number of moves is %d.\n\n", t, sum);
    }

    return 0;
}
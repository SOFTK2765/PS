#include <bits/stdc++.h>

using namespace std;

const int dx[] = {-1, -2, 1, 2};

int a[1001];

int main()
{
    for(int t=1;t<=10;t++)
    {
        int n;
        scanf(" %d", &n);
        for(int i=0;i<n;i++)
            scanf(" %d", &a[i]);
        int sum = 0;
        for(int i=2;i<n-2;i++)
        {
            int mx = 0;
            for(int j=0;j<4;j++)
                mx = max(mx, a[i+dx[j]]);
            if(a[i]-mx>0) sum += (a[i]-mx);
        }
        printf("#%d %d\n", t, sum);
    }

    return 0;
}
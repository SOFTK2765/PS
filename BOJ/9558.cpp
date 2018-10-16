#include <bits/stdc++.h>

using namespace std;

int a[1001], b[1001];

int main()
{
    int t;
    scanf("%d", &t);
    while(t--)
    {
        int n, m;
        scanf(" %d", &n);
        for(int i=0;i<n;i++)
            scanf(" %d", &a[i]);
        scanf(" %d", &m);
        for(int i=0;i<m;i++)
            scanf(" %d", &b[i]);
        int mn = 987654321;
        for(int i=0;i<n;i++)
            for(int j=0;j<m;j++)
            {
                int tmp = abs(a[i]-b[j]);
                if(tmp<mn) mn = tmp;
            }
        printf("%d\n", mn);
    }

    return 0;
}
#include <bits/stdc++.h>

using namespace std;

int a[100001];

int main()
{
    int n, m;
    scanf("%d %d", &n, &m);
    for(int i=0;i<n;i++)
        scanf(" %d", &a[i]);
    for(int i=0;i<m;i++)
    {
        int tmp1, tmp2;
        scanf(" %d %d", &tmp1, &tmp2);
        int mn = 2100000000, mx = 0;
        for(int i=tmp1-1;i<tmp2;i++)
        {
            if(mn>a[i]) mn = a[i];
            if(mx<a[i]) mx = a[i];
        }
        printf("%d %d\n", mn, mx);
    }

    return 0;
}
#include <bits/stdc++.h>

using namespace std;

int a[101];

int main()
{
    int n, x, y;
    scanf("%d %d %d", &n, &x, &y);
    for(int i=0;i<n;i++)
        scanf(" %d", &a[i]);
    if(x>y) printf("%d", n);
    else
    {
        int cnt = 0;
        for(int i=0;i<n;i++)
            if(a[i]<=x) cnt++;
        printf("%d", (cnt+1)/2);
    }

    return 0;
}
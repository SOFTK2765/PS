#include <bits/stdc++.h>

using namespace std;

int a[51];

int main()
{
    int n, s, p;
    scanf("%d %d %d", &n, &s, &p);
    for(int i=0;i<n;i++)
        scanf(" %d", &a[i]);
    if(n==0) printf("1");
    else if(n<p)
    {
        for(int i=0;i<n;i++)
        {
            if(s>=a[i])
            {
                printf("%d", i+1);
                break;
            }
            if(i==n-1) printf("%d", n+1);
        }
    }
    else
    {
        if(a[n-1]>=s) printf("-1");
        else
        {
            for(int i=0;i<n;i++)
                if(a[i]<=s)
                {
                    printf("%d", i+1);
                    break;
                }
        }
    }

    return 0;
}
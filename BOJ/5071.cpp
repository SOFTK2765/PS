#include <bits/stdc++.h>

using namespace std;

int a[1001], b[1001];

int main()
{
    while(1)
    {
        int n;
        scanf(" %d", &n);
        if(n==0) break;
        for(int i=0;i<n;i++)
            scanf(" %d", &a[i]);
        for(int i=0;i<n;i++)
            scanf(" %d", &b[i]);
        sort(a, a+n);
        sort(b, b+n);
        int mx = -987654321;
        for(int i=0;i<n;i++)
        {
            int sum = 0;
            for(int j=0;j<n;j++)
                sum += a[(j+i)%n]>b[j]?1:a[(j+i)%n]<b[j]?-1:0;
            if(mx<sum) mx = sum;
        }
        printf("%d\n", mx*200);
    }

    return 0;
}
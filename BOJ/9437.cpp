#include <bits/stdc++.h>

using namespace std;

int a[4];

int main()
{
    while(1)
    {
        int n;
        scanf(" %d", &n);
        if(n==0) break;
        int k;
        scanf(" %d", &k);
        int t;
        if(k>n/2) t = n-k+1;
        else t = k;
        if(t%2==0) t--;
        a[0] = t;
        a[1] = t+1;
        a[2] = n-t;
        a[3] = n-t+1;
        for(int i=0;i<4;i++)
            if(a[i]!=k) printf("%d ", a[i]);
        printf("\n");
    }

    return 0;
}
#include <bits/stdc++.h>

using namespace std;

int a[11];

int main()
{
    int n;
    for(n=0;~scanf("%1d", &a[n]);n++);
    bool flag = false;
    for(int i=0;i<n-1;i++)
    {
        long long res1 = 1;
        for(int j=0;j<=i;j++)
            res1 *= a[j];
        long long res2 = 1;
        for(int j=i+1;j<n;j++)
            res2 *= a[j];
        if(res1==res2) flag = true;
    }
    printf("%s", flag?"YES":"NO");

    return 0;
}
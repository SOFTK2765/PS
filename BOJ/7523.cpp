#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    scanf("%d", &t);
    for(int tc=1;tc<=t;tc++)
    {
        int n, m;
        scanf(" %d %d", &n, &m);
        long long res;
        if(n>=0 && m>=0) res = ((long long)m*(m+1)/2)-((long long)(n-1)*n/2);
        else if(n<0 && m>=0) res = ((long long)m*(m+1)/2)-((long long)(-n)*((-n)+1)/2);
        else if(n<0 && m<0) res = ((long long)((-m)-1)*(-m)/2)-((long long)(-n)*((-n)+1)/2);
        printf("Scenario #%d:\n%lld\n\n", tc, res);
    }

    return 0;
}
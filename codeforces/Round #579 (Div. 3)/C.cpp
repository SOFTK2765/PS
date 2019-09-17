#include <bits/stdc++.h>

using namespace std;

long long a[400001];

long long gcd_euc(long long a, long long b){return a%b?gcd_euc(b, a%b):b;}

int main()
{
    int n;
    scanf("%d", &n);
    for(int i=0;i<n;i++)
        scanf(" %lld", &a[i]);
    long long tmp = a[0];
    for(int i=1;i<n;i++)
        tmp = gcd_euc(tmp, a[i]);
    int cnt = 0;
    for(long long i=1;i*i<=tmp;i++)
        if(tmp%i==0)
        {
            if(i*i==tmp) cnt++;
            else cnt+=2;
        }
    printf("%d", cnt);

    return 0;
}
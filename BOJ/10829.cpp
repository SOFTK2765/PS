#include <bits/stdc++.h>

using namespace std;

char a[1001];

int main()
{
    long long n;
    scanf("%lld", &n);
    for(int i=0;;i++)
    {
        a[i] = (n%2==0?'0':'1');
        if(n==0 || n==1) break;
        n /= 2;
    }
    int l = strlen(a);
    for(int i=0;i<(l+1)/2;i++)
    {
        char tmp = a[i];
        a[i] = a[l-1-i];
        a[l-1-i] = tmp;
    }
    for(int i=0;i<l;i++)
        printf("%c", a[i]);

    return 0;
}
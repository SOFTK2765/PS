#include <bits/stdc++.h>

using namespace std;

int a[1001];

int main()
{
    int n;
    scanf("%d", &n);
    a[0] = a[1] = 1;
    for(int i=2;i<=n;i++)
        (a[i] += a[i-1]+(2*a[i-2])) %= 10007;
    printf("%d", a[n]);

    return 0;
}
#include <bits/stdc++.h>

using namespace std;

int a[101];

int main()
{
    int n, k, b;
    scanf("%d %d %d", &n, &k, &b);
    for(int i=0;i<n;i++)
        scanf(" %d", &a[i]);
    int sum = 0;
    for(int i=(b-1)%n;i<(b-1)%n+k;i++)
        sum += a[i%n];
    printf("%d", sum);

    return 0;
}
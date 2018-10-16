#include <bits/stdc++.h>

using namespace std;

int a[501];

int main()
{
    int n;
    scanf("%d", &n);
    for(int i=0;i<n;i++)
        scanf(" %d", &a[i]);
    long long sum = 0;
    for(int i=0;i<n-1;i++)
        sum += abs(a[i+1]-a[i]);

    return 0;
}
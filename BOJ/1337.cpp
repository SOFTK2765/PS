#include <bits/stdc++.h>

using namespace std;

int a[10001], b[10001];

int main()
{
    int n;
    scanf("%d", &n);
    for(int i=0;i<n;i++)
        scanf(" %d", &a[i]);
    sort(a, a+n);
    for(int i=0;i<n-1;i++)
        b[i] = a[i+1]-a[i];
    int mn = 1987654321;
    for(int i=4;i>=1;i--)
        for(int j=0;j<n-i;j++)
        {
            int sum = 0;
            for(int k=0;k<i;k++)
                sum += b[k+j];
            mn = min(mn, sum-i<5-i-1?5-i-1:sum-i);
        }
    printf("%d", mn>4?4:mn);

    return 0;
}
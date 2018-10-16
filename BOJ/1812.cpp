#include <bits/stdc++.h>

using namespace std;

int a[1000], b[1000];

int main()
{
    int n;
    scanf("%d", &n);
    int sum = 0;
    for(int i=0;i<n;i++)
    {
        scanf(" %d", &a[i]);
        sum += a[i];
    }
    sum /= 2;
    for(int i=1;i<n;i+=2)
        sum -= a[i];
    b[0] = sum;
    for(int i=1;i<n;i++)
        b[i] = a[i-1]-b[i-1];
    for(int i=0;i<n;i++)
        printf("%d\n", b[i]);

    return 0;
}
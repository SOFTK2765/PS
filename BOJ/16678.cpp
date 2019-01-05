#include <bits/stdc++.h>

using namespace std;

int a[100001];

int main()
{
    int n;
    scanf("%d", &n);
    for(int i=0;i<n;i++)
        scanf(" %d", &a[i]);
    sort(a, a+n);
    long long sum = 0;
    int tmp = 1;
    for(int i=0;i<n;i++)
    {
        sum += (a[i]-tmp);
        if(i+1<n && a[i+1]>tmp) tmp++;
    }
    printf("%lld", sum);

    return 0;
}
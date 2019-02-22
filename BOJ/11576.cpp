#include <bits/stdc++.h>

using namespace std;

int a[26];

int main()
{
    int tmp1, tmp2, n;
    scanf("%d %d %d", &tmp1, &tmp2, &n);
    for(int i=0;i<n;i++)
        scanf(" %d", &a[i]);
    long long tmp = 1, sum = 0;
    for(int i=n-1;i>=0;i--)
    {
        sum += tmp*a[i];
        tmp *= tmp1;
    }
    tmp = 1;
    while(sum/(tmp *= tmp2));
    tmp /= tmp2;
    while(tmp)
    {
        printf("%d ", sum/tmp);
        sum %= tmp;
        tmp /= tmp2;
    }

    return 0;
}
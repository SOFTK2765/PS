#include <bits/stdc++.h>

using namespace std;

int a[10001];

int main()
{
    int t;
    scanf("%d", &t);
    while(t--)
    {
        int k;
        scanf(" %d", &k);
        for(int i=0;i<k;i++)
            scanf(" %d", &a[i]);
        sort(a, a+k);
        long long sum = 0;
        for(int i=0;i<k;i++)
            sum += (sum+a[i]);
        printf("%d\n", sum);
    }

    return 0;
}
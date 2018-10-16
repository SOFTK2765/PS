#include <bits/stdc++.h>

using namespace std;

int a[1001];

int main()
{
    int n;
    scanf("%d", &n);
    while(n--)
    {
        int tmp1, tmp2;
        scanf(" %d %d", &tmp1, &tmp2);
        a[tmp2] = tmp1;
    }
    int sum = 0;
    for(int i=0;i<1001;i++)
        sum += (a[i]*i);
    printf("%d", sum);

    return 0;
}
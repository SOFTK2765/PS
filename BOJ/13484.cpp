#include <bits/stdc++.h>

using namespace std;

int main()
{
    int x, n;
    scanf("%d %d", &x, &n);
    int sum = 0;
    for(int i=0;i<n;i++)
    {
        int tmp;
        scanf(" %d", &tmp);
        sum += tmp;
    }
    printf("%d", x*(n+1)-sum);

    return 0;
}
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    scanf("%d", &n);
    int sum = 0, max = 0;
    while(n--)
    {
        int tmp;
        scanf(" %d", &tmp);
        sum += tmp;
        if(max<tmp) max = tmp;
    }
    printf("%d", sum-max);

    return 0;
}
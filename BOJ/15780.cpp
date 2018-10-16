#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, k;
    scanf("%d %d", &n, &k);
    int sum = 0;
    for(int i=0;i<k;i++)
    {
        int tmp;
        scanf(" %d", &tmp);
        sum += ((tmp+1)/2);
    }
    printf("%s", sum>=n?"YES":"NO");

    return 0;
}
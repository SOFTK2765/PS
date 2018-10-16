#include <bits/stdc++.h>

using namespace std;

int main()
{
    int k, n;
    scanf("%d %d", &k, &n);
    int sum = 0;
    for(int i=0;i<n;i++)
    {
        int tmp1;
        char tmp2;
        scanf(" %d %c", &tmp1, &tmp2);
        sum += tmp1;
        if(sum>=210)
        {
            printf("%d", k);
            break;
        }
        if(tmp2=='T') (k %= 8)++;
    }

    return 0;
}
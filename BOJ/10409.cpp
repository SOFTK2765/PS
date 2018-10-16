#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, t;
    scanf("%d %d", &n, &t);
    int sum = 0;
    for(int i=0;i<n;i++)
    {
        int tmp;
        scanf(" %d", &tmp);
        sum += tmp;
        if(sum>t)
        {
            printf("%d", i);
            break;
        }
        if(i==n-1) printf("%d", n);
    }

    return 0;
}
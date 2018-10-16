#include <bits/stdc++.h>

using namespace std;

int a[500001];

int main()
{
    int n;
    scanf("%d", &n);
    for(int i=1;i<=n;i++)
        scanf(" %d", &a[i]);
    for(int i=1;i<=n+1;i++)
    {
        bool change = false;
        for(int j=1;j<=n-i;j++)
            if(a[j]>a[j+1])
            {
                change = true;
                int tmp = a[j];
                a[j] = a[j+1];
                a[j+1] = tmp;
            }
        if(!change)
        {
            printf("%d", i);
            break;
        }
    }

    return 0;
}
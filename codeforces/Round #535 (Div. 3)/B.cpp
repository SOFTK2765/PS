#include <bits/stdc++.h>

using namespace std;

int a[129];
bool check[129];

int main()
{
    int n;
    scanf("%d", &n);
    for(int i=0;i<n;i++)
        scanf(" %d", &a[i]);
    sort(a, a+n);
    for(int i=1;i<=a[n-1];i++)
        if(a[n-1]%i==0)
        {
            for(int j=0;j<n;j++)
                if(a[j]==i)
                {
                    check[j] = true;
                    break;
                }
        }
    for(int i=n-1;i>=0;i--)
        if(!check[i])
        {
            printf("%d %d", a[n-1], a[i]);
            break;
        }

    return 0;
}
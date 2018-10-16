#include <bits/stdc++.h>

using namespace std;

char a[51];

int main()
{
    int n, k;
    scanf("%d %d", &n, &k);
    scanf("%s", a);
    int cnt = 0;
    bool flag = false;
    for(int i=1;i<n;i++)
    {
        for(int j=0;j<n-i && !flag;j++)
        {
            if(a[j]!=a[j+i]) break;
            if(j==n-i-1)
            {
                cnt = i;
                flag = true;
            }
        }
        if(!flag) cnt = n;
    }
    if(n==1)
    {
        for(int i=0;i<k;i++)
            printf("%s", a);
        return 0;
    }
    for(int i=0;i<k-1;i++)
        for(int j=0;j<cnt;j++)
            printf("%c", a[j]);
    printf("%s", a);

    return 0;
}
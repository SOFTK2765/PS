#include <bits/stdc++.h>

using namespace std;

int a[101];

int main()
{
    int n;
    scanf("%d", &n);
    for(int i=0;i<n;i++)
        scanf(" %d", &a[i]);
    int cnt = 0;
    for(int i=0;i<n;i++)
    {
        if(a[i]<2 || (a[i]!=2 && a[i]%2==0)) continue;
        bool flag = false;
        for(int j=3;j*j<=a[i];j+=2)
        {
            if(a[i]%j==0)
            {
                flag = true;
                break;
            }
        }
        if(!flag) cnt++;
    }
    printf("%d", cnt);

    return 0;
}
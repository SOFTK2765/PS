#include <bits/stdc++.h>

using namespace std;

int a[4];

int main()
{
    int n;
    scanf("%d", &n);
    int mn = 987654321;
    for(int i=0;i<n;i++)
    {
        scanf("%d", &a[i]);
        if(mn>a[i]) mn = a[i];
    }
    for(int i=1;i<=mn;i++)
    {
        bool flag = false;
        for(int j=0;j<n;j++)
            if(!flag && a[j]%i!=0) flag = true;
        if(flag) continue;
        printf("%d\n", i);
    }

    return 0;
}
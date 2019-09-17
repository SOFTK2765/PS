#include <bits/stdc++.h>

using namespace std;

int a[11], sel[11];
bool check[11];

int n;

bool f(int pos)
{
    if(pos==n)
    {
        for(int i=1;i<=n;i++)
        {
            int cnt = 0;
            for(int j=0;sel[j]!=i;j++)
                if(i<sel[j]) cnt++;
            if(cnt!=a[i-1]) return false;
        }
        for(int i=0;i<n;i++)
            printf("%d ", sel[i]);
        return true;
    }
    for(int i=1;i<=n;i++)
        if(!check[i])
        {
            sel[pos] = i;
            check[i] = true;
            if(f(pos+1)) return true;
            check[i] = false;
        }
}

int main()
{
    scanf("%d", &n);
    for(int i=0;i<n;i++)
        scanf(" %d", &a[i]);
    f(0);

    return 0;
}
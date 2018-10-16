#include <bits/stdc++.h>

using namespace std;

int a[101];
bool check[101] = {};
int n, m, mx = 0;

void f(int sum, int pos, int ni)
{
    if(pos==3 && m>=sum && mx<sum)
    {
        mx = sum;
        return;
    }
    else if(pos==3) return;
    for(int i=ni;i<n;i++)
    {
        if(!check[i])
        {
            check[i] = true;
            f(sum+a[i], pos+1, i+1);
            check[i] = false;
        }
    }
}

int main()
{
    scanf("%d %d", &n, &m);
    for(int i=0;i<n;i++)
        scanf(" %d", &a[i]);
    f(0, 0, 0);
    printf("%d", mx);

    return 0;
}
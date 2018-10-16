#include <bits/stdc++.h>

using namespace std;

int n;
bool check[9];
int a[9];

void f(int pos)
{
    if(pos==n)
    {
        for(int i=0;i<n;i++)
            printf("%d ", a[i]);
        printf("\n");
        return;
    }
    for(int i=1;i<=n;i++)
    {
        if(!check[i])
        {
            a[pos] = i;
            check[i] = true;
            f(pos+1);
            check[i] = false;
        }
    }
}

int main()
{
    scanf("%d", &n);
    f(0);

    return 0;
}
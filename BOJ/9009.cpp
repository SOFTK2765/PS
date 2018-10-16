#include <bits/stdc++.h>

using namespace std;

int a[45], res[45];
int n, pos;
bool check[45];
bool flag;

void f(int tn, int ind)
{
    if(tn==n)
    {
        for(int i=pos-1;i>=0;i--)
            printf("%d ", res[i]);
        printf("\n");
        flag = true;
        return;
    }
    for(int i=ind-1;i>=0 && !flag;i--)
    {
        if(!check[i] && tn+a[i]<=n)
        {
            check[i] = true;
            res[pos++] = a[i];
            f(tn+a[i], i);
            check[i] = false;
        }
    }
}

int main()
{
    a[0] = 0;
    a[1] = 1;
    for(int i=2;i<45;i++)
        a[i] = a[i-1]+a[i-2];
    int t;
    scanf("%d", &t);
    while(t--)
    {
        scanf(" %d", &n);
        pos = 0;
        flag = false;
        f(0, 45);
    }

    return 0;
}
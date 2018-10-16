#include <bits/stdc++.h>

using namespace std;

int n, mx = 0;
int a[9], b[9];
bool c[9] = {};

void f(int pos)
{
    if(pos==n)
    {
        int sum = 0;
        for(int i=0;i<n-1;i++)
            sum += abs(b[i]-b[i+1]);
        if(sum>mx) mx = sum;
    }
    for(int i=0;i<n;i++)
    {
        if(!c[i])
        {
            c[i] = true;
            b[pos] = a[i];
            f(pos+1);
            c[i] = false;
        }
    }
}

int main()
{
    scanf("%d", &n);
    for(int i=0;i<n;i++)
        scanf("%d", &a[i]);
    f(0);
    printf("%d", mx);

    return 0;
}
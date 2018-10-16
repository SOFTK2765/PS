#include <bits/stdc++.h>

using namespace std;

int x[1000001];

int main()
{
    x[0] = 1;
    for(int i=1;i<1000001;i++)
        x[i] = (x[(int)(i-sqrt(i))]+x[(int)(log(i))]+x[(int)(i*sin(i)*sin(i))])%1000000;
    while(1)
    {
        int n;
        scanf(" %d", &n);
        if(n==-1) break;
        printf("%d\n", x[n]);
    }

    return 0;
}
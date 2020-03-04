#include <bits/stdc++.h>

using namespace std;

bool pn[1000001];
int sn[1000001];

int dfs(int n)
{
    if(sn[n]==1 || sn[n]==-1) return sn[n] = -1;
    if(sn[n]==2) return sn[n];
    if(n==1) return sn[n] = 2;
    int tmp = n, res = 0;
    while(tmp)
    {
        res += (tmp%10)*(tmp%10);
        tmp /= 10;
    }
    sn[n] = 1;
    return sn[n] = dfs(res);
}

int main()
{
    int n;
    scanf("%d", &n);
    for(int i=4;i<=n;i+=2)
        pn[i] = true;
    for(int i=3;i*i<=n;i+=2)
        if(!pn[i]) for(int j=i+i;j<=n;j+=i)
            pn[j] = true;
    pn[0] = pn[1] = true;
    for(int i=2;i<=n;i++)
        if(!pn[i] && dfs(i)==2) printf("%d\n", i);

    return 0;
}
#include <bits/stdc++.h>

using namespace std;

int k;
int a[14];
bool visit[14] = {};

void f(int pos, int ni)
{
    if(pos==6)
    {
        for(int i=0;i<k;i++)
            if(visit[i]) printf("%d ", a[i]);
        printf("\n");
        return;
    }
    for(int i=ni;i<k;i++)
    {
        if(!visit[i])
        {
            visit[i] = true;
            f(pos+1, i+1);
            visit[i] = false;
        }
    }
}

int main()
{
    while(1)
    {
        scanf("%d", &k);
        if(k==0) break;
        for(int i=0;i<k;i++)
            scanf("%d", &a[i]);
        f(0, 0);
        printf("\n");
    }

    return 0;
}
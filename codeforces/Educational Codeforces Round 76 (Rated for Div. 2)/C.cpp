#include <bits/stdc++.h>

using namespace std;

int a[200001];
bool check[200001];

int main()
{
    int t;
    scanf("%d", &t);
    while(t--)
    {
        memset(check, 0, sizeof(check));
        int n;
        scanf(" %d", &n);
        for(int i=0;i<n;i++)
            scanf(" %d", &a[i]);
        int posa = 0, posb = 0, res = 987654321;
        check[a[0]] = true;
        bool flag = 0;
        while(posa<n)
        {
            if(flag)
            {
                res = min(res, posb-posa+1);
                if(a[posa]==a[posb])
                {
                    flag = false;
                    posa++;
                }
                else check[a[posa++]] = false;
                continue;
            }
            if(++posb>=n) break;
            if(check[a[posb]]) flag = true;
            check[a[posb]] = true;
        }
        printf("%d\n", res==987654321?-1:res);
    }

    return 0;
}
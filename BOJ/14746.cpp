#include <bits/stdc++.h>

using namespace std;

int p[500001], q[500001];

int main()
{
    int n, m, c1, c2;
    scanf("%d %d %d %d", &n, &m, &c1, &c2);
    for(int i=0;i<n;i++)
        scanf(" %d", &p[i]);
    for(int i=0;i<m;i++)
        scanf(" %d", &q[i]);
    sort(p, p+n);
    sort(q, q+m);
    int posa = 0, posb = 0, s = 1987654321, cnt = 0;
    while(posa<n && posb<m)
    {
        int tmp = abs(p[posa]-q[posb]);
        if(tmp<s)
        {
            cnt = 1;
            s = tmp;
            if(abs(p[posa+1]-q[posb])<abs(p[posa]-q[posb+1])) posa++;
            else posb++;
        }
        else if(tmp==s)
        {
            cnt++;
            if(abs(p[posa+1]-q[posb])<abs(p[posa]-q[posb+1])) posa++;
            else posb++;
        }
        else
        {
            if(p[posa]>q[posb]) posb++;
            else posa++;
        }
    }
    if(posa==n) posb++;
    if(posb==m) posa++;
    while(posa<n)
    {
        int tmp = abs(p[posa]-q[posb-1]);
        if(tmp<s)
        {
            cnt = 1;
            s = tmp;
        }
        else if(tmp==s) cnt++;
        posa++;
    }
    while(posb<m)
    {
        int tmp = abs(p[posa-1]-q[posb]);
        if(tmp<s)
        {
            cnt = 1;
            s = tmp;
        }
        else if(tmp==s) cnt++;
        posb++;
    }
    printf("%d %d", s+abs(c1-c2), cnt);

    return 0;
}
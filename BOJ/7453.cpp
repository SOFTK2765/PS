#include <bits/stdc++.h>

using namespace std;

int a[4001], b[4001], c[4001], d[4001];
int m1[16000001], m2[16000001];

int main()
{
    int n;
    scanf("%d", &n);
    for(int i=0;i<n;i++)
        scanf(" %d %d %d %d", &a[i], &b[i], &c[i], &d[i]);
    int pos = 0;
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
        {
            m1[pos] = a[i]+b[j];
            m2[pos++] = c[i]+d[j];
        }
    sort(m1, m1+pos);
    sort(m2, m2+pos);
    int posa = 0, posb = pos-1;
    long long cnt = 0;
    while(posa<pos && posb>=0)
    {
        int tmp = m1[posa]+m2[posb];
        if(tmp>0) posb--;
        else if(tmp<0) posa++;
        else
        {
            int acnt = 1;
            while(--posb>=0 && m1[posa]+m2[posb]==0) acnt++;
            posb++;
            int bcnt = 1;
            while(++posa<pos && m1[posa]+m2[posb]==0) bcnt++;
            cnt += 1LL*acnt*bcnt;
            posb--;
        }
    }
    while(posa<pos)
    {
        int tmp = m1[posa]+m2[0];
        if(tmp>0) break;
        else if(tmp<0) posa++;
        else
        {
            cnt++;
            posa++;
        }
    }
    while(posb>=0)
    {
        int tmp = m1[pos-1]+m2[posb];
        if(tmp>0) posb--;
        else if(tmp<0) break;
        else
        {
            cnt++;
            posb++;
        }
    }
    printf("%lld", cnt);

    return 0;
}
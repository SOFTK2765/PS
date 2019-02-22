#include <bits/stdc++.h>

using namespace std;

int a[5001];
pair<int, pair<int, int>> s[12500001];

int main()
{
    int w, n;
    scanf("%d %d", &w, &n);
    for(int i=0;i<n;i++)
        scanf(" %d", &a[i]);
    sort(a, a+n);
    int pos = 0;
    for(int i=0;i<n;i++)
        for(int j=i+1;j<n;j++)
        {
            s[pos].first = a[i]+a[j];
            s[pos].second.first = i;
            s[pos++].second.second = j;
        }
    sort(s, s+pos);
    int posa = 0, posb = pos-1;
    bool flag = false;
    while(posa<=posb)
    {
        if(s[posa].first+s[posb].first<w) posa++;
        else if(s[posa].first+s[posb].first>w) posb--;
        else if(s[posa].second.first!=s[posb].second.first && s[posa].second.first!=s[posb].second.second && s[posa].second.second!=s[posb].second.first && s[posa].second.first!=s[posb].second.second)
        {
            flag = true;
            break;
        }
        else
        {
            int cnta = 0, cntb = 0;
            while(s[posa].first==s[posa+cnta+1].first && posa+cnta+1<posb) cnta++;
            while(s[posb].first==s[posb-cntb-1].first && posb-cntb-1>posa) cntb++;
            for(int i=0;i<cnta && !flag;i++)
                for(int j=0;j<cntb && !flag;j++)
                    if(s[posa+i].second.first!=s[posb-j].second.first && s[posa+i].second.first!=s[posb-j].second.second && s[posa+i].second.second!=s[posb-j].second.first && s[posa+i].second.first!=s[posb-j].second.second) flag = true;
            if(flag) break;
            posa += cnta+1;
            posb -= cntb+1;
            posa--;
        }
    }
    printf("%s", flag?"YES":"NO");

    return 0;
}
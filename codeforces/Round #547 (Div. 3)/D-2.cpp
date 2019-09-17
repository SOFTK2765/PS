#include <bits/stdc++.h>

using namespace std;

char a[150001], b[150001];
int acnt[27], bcnt[27];

int main()
{
    int n;
    scanf("%d", &n);
    for(int i=0;i<n;i++)
    {
        char tmp;
        scanf("%c", &tmp);
        if(tmp!='?') acnt[tmp-'a'];
        else acnt[26] = true;
    }
    for(int i=0;i<n;i++)
    {
        char tmp;
        scanf("%c", &tmp);
        if(tmp!='?') bcnt[tmp-'a'];
        else bcnt[26] = true;
    }
    sort(a, a+n);
    sort(b, b+n);
    int posa = 0, posb = 0;
    vector<pair<int, int>> v;
    while(posa<n && posb<n && a[posa]!='~' && b[posb]!='~')
    {
        if(a[posa].first==b[posb].first)
        {
            v.push_back({a[posa].second, b[posb].second});
            acheck[posa] = true;
            bcheck[posb] = true;
        }
        else if(a[posa].first<b[posb].first) posa++;
        else if(a[posa].first>b[posb].first) posb++;
    }
    if(posa<n && a[posa]=='~')
    {
        for(int i=posa;i<n;i++)
        {
            for(int j=tmp;j<n;j++)
            v.push_back({a[i].second, });
        }
    }

    return 0;
}
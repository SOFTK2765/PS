#include <bits/stdc++.h>

using namespace std;

char tmpa[150001], tmpb[150001];
pair<char, int> a[150001], b[150001];
bool acheck[150001], bcheck[150001];

int main()
{
    int n;
    scanf("%d %s %s", &n, tmpa, tmpb);
    for(int i=0;i<n;i++)
    {
        a[i].first = tmpa[i];
        a[i].second = i+1;
        if(a[i].first=='?') a[i].first = '~';
    }
    for(int i=0;i<n;i++)
    {
        b[i].first = tmpb[i];
        b[i].second = i+1;
        if(b[i].first=='?') b[i].first = '~';
    }
    sort(a, a+n);
    sort(b, b+n);
    int posa = 0, posb = 0;
    vector<pair<int, int>> v;
    while(posa<n && posb<n && a[posa].first!='~' && b[posb].first!='~')
    {
        if(a[posa].first==b[posb].first)
        {
            v.push_back({a[posa].second, b[posb].second});
            acheck[posa++] = true;
            bcheck[posb++] = true;
        }
        else if(a[posa].first<b[posb].first) posa++;
        else if(a[posa].first>b[posb].first) posb++;
    }
    while(posa+1<n && a[posa].first!='~') posa++;
    int tmp = 0;
    if(posa<n && a[posa].first=='~')
    {
        for(int i=posa;i<n;i++)
        {
            for(int j=tmp;j<n;j++)
                if(!bcheck[j])
                {
                    bcheck[j] = true;
                    v.push_back({a[i].second, b[j].second});
                    tmp = j+1;
                    break;
                }
            acheck[i] = true;
        }
    }
    while(posb+1<n && b[posb].first!='~') posb++;
    while(posb+1<n && bcheck[posb]) posb++;
    tmp = 0;
    if(posb<n && b[posb].first=='~')
    {
        for(int i=posb;i<n;i++)
        {
            for(int j=tmp;j<n;j++)
                if(!acheck[j])
                {
                    acheck[j] = true;
                    v.push_back({a[j].second, b[i].second});
                    tmp = j+1;
                    break;
                }
            bcheck[i] = true;
        }
    }
    int size = v.size();
    printf("%d\n", size);
    for(int i=0;i<size;i++)
        printf("%d %d\n", v[i].first, v[i].second);

    return 0;
}
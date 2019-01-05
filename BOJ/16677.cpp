#include <bits/stdc++.h>

using namespace std;

bool cmp(const pair<pair<double, int>, string> &a, const pair<pair<double, int>, string> &b)
{
    if(a.first.first!=b.first.first) return a.first.first>b.first.first;
    return a.first.second<b.first.second;
}

int main()
{
    string m;
    cin >> m;
    int n;
    scanf(" %d", &n);
    vector<pair<pair<double, int>, string>> v;
    for(int i=0;i<n;i++)
    {
        string tmp1;
        int tmp2;
        cin >> tmp1 >> tmp2;
        string tmp = m;
        int posa = 0, posb = 0, ml = tmp.length(), tl = tmp1.length(), cnt = 0;
        while(posa<ml && posb<tl)
        {
            if(tmp[posa]==tmp1[posb])
            {
                posa++;
                posb++;
            }
            else
            {
                posb++;
                cnt++;
            }
        }
        if(posa<ml) cnt = 987654321;
        while(posb++<tl) cnt++;
        v.push_back({{cnt!=987654321?1.0*tmp2/cnt:0, i}, tmp1});
    }
    sort(v.begin(), v.end(), cmp);
    if(v[0].first.first==0) printf("No Jam");
    else cout << v[0].second;

    return 0;
}
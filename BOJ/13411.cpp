#include <bits/stdc++.h>

using namespace std;

vector<pair<int, double>> res;

bool cmp(const pair<int, double> &a, const pair<int, double> &b)
{
    if(a.second!=b.second) return a.second<b.second;
    return a.first<b.first;
}

int main()
{
    int n;
    scanf("%d", &n);
    for(int i=1;i<=n;i++)
    {
        int a, b, c;
        scanf(" %d %d %d", &a, &b, &c);
        res.push_back({i, (double)1.0*(a*a+b*b)/(c*c)});
    }
    sort(res.begin(), res.end(), cmp);
    for(vector<pair<int, double>>::iterator it=res.begin();it!=res.end();it++)
        printf("%d\n", (*it).first);

    return 0;
}
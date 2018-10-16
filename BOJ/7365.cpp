#include <bits/stdc++.h>

using namespace std;

int a[4];
int b[8];
int res[22];

int main()
{
    for(int i=0;i<3;i++)
        scanf(" %d", &a[i]);
    for(int i=0;i<7;i++)
        scanf(" %d", &b[i]);
    vector<pair<double, pair<int, int>>> v;
    for(int i=0;i<3;i++)
        for(int j=0;j<7;j++)
            v.push_back({((double)a[i]/b[j]), {i+1, j+1}});
    sort(v.begin(), v.end());
    for(int i=0;i<21;i++)
        printf("%.2lf %d %d\n", v[i].first, v[i].second.first, v[i].second.second);

    return 0;
}
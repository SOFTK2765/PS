#include <bits/stdc++.h>

using namespace std;

int n, mx;
vector<pair<int, int>> v;
bool check[16];

void f(int pos)
{
    if(pos>=n)
    {
        int sum = 0;
        for(int i=0;i<n;i++)
            if(check[i]) sum += v[i].second;
        mx = max(mx, sum);
        return;
    }
    for(int i=pos;i<n;i++)
    {
        if(!check[i])
        {
            if(i+v[i].first<=n) check[i] = true;
            f(i+v[i].first);
            check[i] = false;
        }
    }
}

int main()
{
    scanf("%d", &n);
    for(int i=0;i<n;i++)
    {
        int t, p;
        scanf(" %d %d", &t, &p);
        v.push_back({t, p});
    }
    f(0);
    printf("%d", mx);

    return 0;
}
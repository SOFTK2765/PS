#include <bits/stdc++.h>

using namespace std;

vector<pair<int, int>> v;
int n, mn = 987654321;
bool check[11];

void f(int pos)
{
    if(pos==n)
    {
        int s = 1, ss = 0, cnt = 0;
        for(int i=0;i<n;i++)
            if(check[i])
            {
                cnt++;
                s *= v[i].first;
                ss += v[i].second;
            }
        if(cnt!=0) mn = min(mn, abs(s-ss));
        return;
    }
    f(pos+1);
    check[pos] = true;
    f(pos+1);
    check[pos] = false;
}

int main()
{
    scanf("%d", &n);
    for(int i=0;i<n;i++)
    {
        int a, b;
        scanf(" %d %d", &a, &b);
        v.push_back({a, b});
    }
    f(0);
    printf("%d", mn);

    return 0;
}
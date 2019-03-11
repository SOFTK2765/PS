#include <bits/stdc++.h>

using namespace std;

bool check[101];

int main()
{
    int t;
    scanf("%d", &t);
    while(t--)
    {
        int n;
        scanf(" %d", &n);
        memset(check, 0, sizeof(check));
        vector<pair<int, int>> v;
        for(int i=0;i<n;i++)
        {
            int tx, ty;
            scanf(" %d %d", &tx, &ty);
            v.push_back({tx, ty});
        }
        int m;
        scanf(" %d", &m);
        int cnt = 0;
        for(int i=0;i<m;i++)
        {
            int tx, ty;
            scanf(" %d %d", &tx, &ty);
            for(int j=0;j<n;j++)
                if(!check[j] && tx-50<=v[j].first && v[j].first<=tx+50 && ty-50<=v[j].second && v[j].second<=ty+50)
                {
                    check[j] = true;
                    cnt++;
                }
        }
        printf("%d\n", cnt);
    }

    return 0;
}
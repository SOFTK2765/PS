#include <bits/stdc++.h>

using namespace std;

int a[101][101];
int cnt[101];

int main()
{
    int r, c, k;
    scanf("%d %d %d", &r, &c, &k);
    for(int i=0;i<3;i++)
        for(int j=0;j<3;j++)
            scanf(" %d", &a[i][j]);
    int t = 0, mxrow = 3, mxcol = 3;
    bool flag = false;
    while(t<=100)
    {
        if(a[r-1][c-1]==k)
        {
            flag = true;
            break;
        }
        if(mxrow>=mxcol)
        {
            for(int i=0;i<mxrow;i++)
            {
                memset(cnt, 0, sizeof(cnt));
                for(int j=0;j<mxcol;j++)
                    cnt[a[i][j]]++;
                vector<pair<int, int>> v;
                for(int j=1;j<=100;j++)
                    if(cnt[j]) v.push_back({cnt[j], j});
                memset(a[i], 0, sizeof(a[i]));
                sort(v.begin(), v.end());
                int vsize = min((int)v.size(), (int)50);
                mxcol = max(mxcol, vsize*2);
                for(int j=0;j<vsize;j++)
                {
                    a[i][j*2] = v[j].second;
                    a[i][j*2+1] = v[j].first;
                }
            }
        }
        else
        {
            for(int i=0;i<mxcol;i++)
            {
                memset(cnt, 0, sizeof(cnt));
                for(int j=0;j<mxrow;j++)
                    cnt[a[j][i]]++;
                vector<pair<int, int>> v;
                for(int j=1;j<=100;j++)
                    if(cnt[j]) v.push_back({cnt[j], j});
                for(int j=0;j<100;j++)
                    a[j][i] = 0;
                sort(v.begin(), v.end());
                int vsize = min((int)v.size(), (int)50);
                mxrow = max(mxrow, vsize*2);
                for(int j=0;j<vsize;j++)
                {
                    a[j*2][i] = v[j].second;
                    a[j*2+1][i] = v[j].first;
                }
            }
        }
        t++;
    }
    if(!flag) printf("-1");
    else printf("%d", t);

    return 0;
}
#include <bits/stdc++.h>

using namespace std;

int res[21];

int main()
{
    int t;
    scanf("%d", &t);
    for(int i=1;i<=t;i++)
    {
        vector<pair<pair<int, int>, int>> v;
        int n;
        scanf(" %d", &n);
        for(int j=0;j<n;j++)
        {
            int tmp;
            scanf(" %d", &tmp);
            v.push_back({{tmp, 0}, j});
        }
        for(int j=0;j<n;j++)
            scanf(" %d", &v[j].first.second);
        sort(v.begin(), v.end());
        for(int j=0;j<n;j++)
            res[v[j].second] = j+1;
        printf("Case #%d: ", i);
        for(int j=0;j<n;j++)
            printf("%d ", res[j]);
        printf("\n");
    }

    return 0;
}
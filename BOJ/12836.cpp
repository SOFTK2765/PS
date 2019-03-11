#include <bits/stdc++.h>

using namespace std;

int dp[10001];

int main()
{
    int n, q;
    scanf("%d %d", &n, &q);
    vector<pair<int, int>> v;
    for(int i=0;i<q;i++)
    {
        int a, b, c;
        scanf(" %d %d %d", &a, &b, &c);
        if(a==1) v.push_back({b, c});
        else
        {
            sort(v.begin(), v.end());
            int size = v.size(), pre = 0;
            for(int j=0;j<size;j++)
            {
                int tmp = v[j].first;
                for(int k=pre;k<tmp;k++)
                    dp[k] = 
            }
        }
    }

    return 0;
}
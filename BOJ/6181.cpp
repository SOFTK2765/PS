#include <bits/stdc++.h>

using namespace std;

int main()
{
    int m, d;
    scanf("%d %d", &m, &d);
    vector<pair<int, int>> v;
    for(int i=0;i<m;i++)
    {
        int tmp1, tmp2;
        scanf(" %d %d", &tmp1, &tmp2);
        v.push_back({tmp1, tmp2});
    }
    cout << v.size() << endl;
    for(auto tmp : v)
    {
        g[tmp.first].push_back(tmp.second);
        g[tmp.second].push_back(tmp.first);
        cout << k.first << " " << k.second << endl;
    }

    return 0;
}
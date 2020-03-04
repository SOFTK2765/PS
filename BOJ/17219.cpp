#include <bits/stdc++.h>

using namespace std;

map<string, string> mp[256][21];

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int n, m;
    cin >> n >> m;
    for(int i=0;i<n;i++)
    {
        string tmp1, tmp2;
        cin >> tmp1 >> tmp2;
        mp[tmp1[0]][tmp1.length()][tmp1] = tmp2;
    }
    for(int i=0;i<m;i++)
    {
        string tmp;
        cin >> tmp;
        cout << mp[tmp[0]][tmp.length()][tmp].c_str() << '\n';
    }

    return 0;
}
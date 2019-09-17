#include <bits/stdc++.h>

using namespace std;

int dp[] = {3, 0, 2, 1};

int main()
{
    int x;
    scanf("%d", &x);
    vector<pair<char, int>> v;
    for(int i=0;i<3;i++)
        v.push_back({dp[(x+i)%4]+'A', i});
    sort(v.begin(), v.end());
    printf("%d %c", v[0].second, v[0].first);

    return 0;
}
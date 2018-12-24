#include <bits/stdc++.h>

using namespace std;

int main()
{
    vector<pair<int, int>> xy(3);
    for(int i=0;i<3;i++)
        scanf(" %d %d", &xy[i].first, &xy[i].second);
    printf("%d", xy.size());

    return 0;
}
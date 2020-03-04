#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    scanf("%d", &n);
    vector<pair<int, int>> v;
    for(int i=0;i<n;i++)
    {
        int tmp;
        scanf(" %d", &tmp);
        v.push_back({tmp, i+1});
    }
    int pos = 0;
    for(int i=0;i<n;i++)
    {
        printf("%d ", v[pos].second);
        int tmp = v[pos].first;
        v.erase(v.begin()+pos);
        if(tmp>0) tmp--;
        if(v.size()>0) pos = (pos+tmp+v.size()*n)%v.size();
    }

    return 0;
}
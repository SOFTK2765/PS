#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    scanf("%d", &n);
    list<pair<int, int>> lt;
    for(int i=0;i<n;i++)
    {
        int tmp;
        scanf(" %d", &tmp);
        lt.push_back({tmp, i+1});
    }
    list<pair<int, int>>::iterator it = lt.begin();
    while(!lt.empty())
    {
        printf("%d ", (*it).second);
        int lsize = lt.size()-1;
        if(lsize==0) break;
        int mtmp = (*it).first<0?((*it).first%lsize)+lsize:((*it).first-1)%lsize;
        it = lt.erase(it);
        if(it==lt.end()) it = lt.begin();
        while(mtmp--) if(++it==lt.end()) it = lt.begin();
    }

    return 0;
}
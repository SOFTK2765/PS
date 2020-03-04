#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    scanf("%d", &t);
    while(t--)
    {
        int q;
        scanf(" %d", &q);
        set<pair<int, int>> st;
        while(q--)
        {
            char di;
            int n;
            scanf(" %c %d", &di, &n);
            if(di=='D' && !st.empty())
            {
                if(n==-1) st.erase(st.begin());
                else st.erase(--st.end());
            }
            else if(di=='I') st.insert({n, q});
        }
        if(st.empty()) printf("EMPTY\n");
        else printf("%d %d\n", (--st.end())->first, st.begin()->first);
    }

    return 0;
}
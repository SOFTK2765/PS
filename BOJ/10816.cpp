#include <bits/stdc++.h>

using namespace std;

int t, n, m, s;

int main()
{
    scanf("%d", &t);
    while(t--)
    {
        set<int> a;
        scanf("%d", &n);
        for(int i=0;i<n;i++)
        {
            scanf("%d", &s);
            a.insert(s);
        }
        scanf("%d", &m);
        for(int i=0;i<m;i++)
        {
            scanf("%d", &s);
            if(a.count(s)>0) printf("%d\n", 1);
            else printf("%d\n", 0);
        }
    }

    return 0;
}
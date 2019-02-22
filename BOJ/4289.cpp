#include <bits/stdc++.h>

using namespace std;

int main()
{
    while(1)
    {
        int n, k;
        scanf("%d", &n);
        if(n==0) break;
        scanf(" %d", &k);
        vector<pair<int, int>> a(n+1, {0, 0});
        int total = k*n*(n-1)/2;
        for(int i=0;i<total;i++)
        {
            int p1, p2;
            string m1, m2;
            cin >> p1 >> m1 >> p2 >> m2;
            if(m1==m2) continue;
            if((m1=="rock" && m2=="scissors") || (m1=="scissors" && m2=="paper") || (m1=="paper" && m2=="rock"))
            {
                a[p1].first++;
                a[p2].second++;
            }
            else if((m2=="rock" && m1=="scissors") || (m2=="scissors" && m1=="paper") || (m2=="paper" && m1=="rock"))
            {
                a[p1].second++;
                a[p2].first++;
            }
        }
        for(int i=1;i<=n;i++)
        {
            int tmp = a[i].first+a[i].second;
            if(tmp==0) printf("-\n");
            else printf("%.3f\n", 1.0*a[i].first/tmp);
        }
        printf("\n");
    }

    return 0;
}
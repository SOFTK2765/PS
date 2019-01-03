#include <bits/stdc++.h>

using namespace std;

int main()
{
    while(1)
    {
        int n;
        scanf(" %d", &n);
        if(n==0) break;
        vector<pair<string, double>> v;
        double mx = 0;
        for(int i=0;i<n;i++)
        {
            string tmp1;
            double tmp2;
            cin >> tmp1 >> tmp2;
            mx = max(mx, tmp2);
            v.push_back({tmp1, tmp2});
        }
        for(int i=0;i<n;i++)
            if(mx==v[i].second) cout << v[i].first << endl;
    }

    return 0;
}
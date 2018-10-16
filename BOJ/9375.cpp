#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    scanf("%d", &t);
    while(t--)
    {
        int n;
        scanf(" %d", &n);
        map<string, int> mp;
        for(int i=0;i<n;i++)
        {
            string tmp1, tmp2;
            cin >> tmp1 >> tmp2;
            if(!mp[tmp2]) mp[tmp2] = 1;
            else mp[tmp2]++;
        }
        int res = 1;
        for(map<string, int>::iterator it=mp.begin();it!=mp.end();it++)
            res *= it->second+1;
        printf("%d\n", res-1);
    }

    return 0;
}
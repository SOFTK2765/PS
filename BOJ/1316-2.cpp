#include <bits/stdc++.h>

using namespace std;

bool check[26];

int main()
{
    int n, cnt = 0;
    scanf("%d", &n);
    for(int i=0;i<n;i++)
    {
        memset(check, 0, sizeof(check));
        string a;
        cin >> a;
        char pre;
        for(string::iterator it=a.begin();it<=a.end();it++)
        {
            if(it==a.end())
            {
                cnt++;
                break;
            }
            if(check[*it-'a'] && pre!=*it) break;
            check[*it-'a'] = true;
            pre = *it;
        }
    }
    printf("%d", cnt);

    return 0;
}
#include <bits/stdc++.h>

using namespace std;

bool check[10];

int main()
{
    int n, m;
    scanf("%d %d", &n, &m);
    for(int i=0;i<m;i++)
    {
        int tmp;
        scanf(" %d", &tmp);
        check[tmp] = true;
    }
    int mn = abs(n-100);
    for(int i=0;i<=1000000;i++)
    {
        string s = to_string(i);
        int l = s.length();
        bool flag = false;
        for(int i=0;i<l;i++)
            if(check[s[i]-'0'])
            {
                flag = true;
                break;
            }
        if(!flag) mn = min(mn, abs(i-n)+l);
    }
    printf("%d", mn);

    return 0;
}
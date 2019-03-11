#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    scanf("%d", &n);
    int tmp = 1, cnt = 1;
    map<int, bool> mp;
    bool flag = false;
    while(tmp%n)
    {
        if(tmp/n) tmp %= n;
        if(mp[tmp])
        {
            flag = true;
            break;
        }
        mp[tmp] = true;
        tmp = tmp*10+1;
        cnt++;
    }
    printf("%d", flag?-1:cnt);

    return 0;
}
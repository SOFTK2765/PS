#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, m;
    scanf("%d %d", &n, &m);
    string s;
    cin >> s;
    int tmp = 0, cnt = 0;
    for(int i=0;i<m;i++)
        if(s[i]=='I')
        {
            int tmpcnt = 0;
            while(i+1<m && i+2<m && s[i+1]=='O' && s[i+2]=='I')
            {
                tmpcnt++;
                i += 2;
            }
            cnt += tmpcnt-n+1<0?0:tmpcnt-n+1;
        }
    printf("%d", cnt);

    return 0;
}
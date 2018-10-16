#include <bits/stdc++.h>

using namespace std;

int cnt[256];

int main()
{
    string a;
    cin >> a;
    for(string::iterator it=a.begin();it<a.end();it++)
        *it<97?cnt[*it]++:cnt[*it-('a'-'A')]++;
    int mx = 0, ans, check = 0;
    for(int i=0;i<256;i++)
        if(mx<cnt[i])
        {
            mx = cnt[i];
            ans = i;
            check = 0;
        }
        else if(mx==cnt[i]) check = 1;
    if(!check) printf("%c", ans);
    else printf("?");

    return 0;
}
#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    cin >> s;
    int l = s.length();
    map<string, bool> mp;
    map<char, int> cnt;
    cnt['P'] = 13;
    cnt['K'] = 13;
    cnt['H'] = 13;
    cnt['T'] = 13;
    for(int i=0;i<l;i+=3)
        if(mp[s.substr(i, 3)]==true)
        {
            printf("GRESKA");

            return 0;
        }
        else
        {
            mp[s.substr(i, 3)] = true;
            cnt[s[i]]--;
        }
    printf("%d %d %d %d", cnt['P'], cnt['K'], cnt['H'], cnt['T']);

    return 0;
}
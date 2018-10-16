#include <bits/stdc++.h>

using namespace std;

int cnt[26];

int main()
{
    string a;
    cin >> a;
    for(string::iterator it=a.begin();it<a.end();it++)
        cnt[*it-'a']++;
    for(int i=0;i<26;i++)
        printf("%d ", cnt[i]);

    return 0;
}
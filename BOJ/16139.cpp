#include <bits/stdc++.h>

using namespace std;

int cnt[200001][27];

int main()
{
    string s;
    cin >> s;
    int l = s.length();
    for(int i=1;i<=l;i++)
    {
        for(int j=0;j<26;j++)
            cnt[i][j] = cnt[i-1][j];
        cnt[i][s[i-1]-'a']++;
    }
    int q;
    scanf(" %d", &q);
    while(q--)
    {
        char a;
        int l, r;
        scanf(" %c %d %d", &a, &l, &r);
        printf("%d\n", cnt[r+1][a-'a']-cnt[l][a-'a']);
    }

    return 0;
}
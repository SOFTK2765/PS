#include <bits/stdc++.h>

using namespace std;

int cnt[26];

int main()
{
    int t;
    scanf("%d ", &t);
    for(int tc=1;tc<=t;tc++)
    {
        for(int i=0;i<26;i++)
            cnt[i] = 0;
        printf("Case %d: ", tc);
        string a;
        getline(cin, a);
        int l = a.length();
        for(int i=0;i<l;i++)
        {
            if('a'<=a[i] && a[i]<='z') cnt[a[i]-'a']++;
            else if('A'<=a[i] && a[i]<='Z') cnt[a[i]-'A']++;
        }
        int mn = 987654321;
        for(int i=0;i<26;i++)
            mn = min(mn, cnt[i]);
        printf("%s\n", mn==0?"Not a pangram":mn==1?"Pangram!":mn==2?"Double pangram!!":"Triple pangram!!!");
    }

    return 0;
}
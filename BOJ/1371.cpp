#include <bits/stdc++.h>

using namespace std;

int cnt[26];
char a[5001];

int main()
{
    while(gets(a))
    {
        if(a==0) break;
        int l = strlen(a);
        for(int i=0;i<l;i++)
            if('a'<=a[i] && a[i]<='z') cnt[a[i]-'a']++;
    }
    int mx = 0;
    for(int i=0;i<26;i++)
        if(mx<cnt[i]) mx = cnt[i];
    for(int i=0;i<26;i++)
        if(cnt[i]==mx) printf("%c", i+'a');

    return 0;
}
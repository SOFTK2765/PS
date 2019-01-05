#include <bits/stdc++.h>

using namespace std;

int cnt[26];

int main()
{
    string a;
    getline(cin, a);
    int l = a.length();
    for(int i=0;i<l;i++)
        if('a'<=a[i] && a[i]<='z') cnt[a[i]-'a']++;
        else if('A'<=a[i] && a[i]<='Z') cnt[a[i]-'A']++;
    for(int i=0;i<26;i++)
    {
        printf("%c | ", i+'A');
        for(int j=0;j<cnt[i];j++)
            printf("*");
        printf("\n");
    }

    return 0;
}
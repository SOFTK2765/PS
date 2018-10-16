#include <bits/stdc++.h>

using namespace std;

int cnt[26];
char a[1000001];

int main()
{
    scanf("%s", a);
    int l = strlen(a);
    for(int i=0;i<l;i++)
    {
        char tmp = a[i];
        if(tmp>='a') a[i] -= 32;
        cnt[a[i]-'A']++;
    }
    int mx = 0;
    for(int i=0;i<26;i++)
        if(cnt[i]>cnt[mx]) mx = i;
    for(int i=0;i<26;i++)
        if(i!=mx && cnt[i]==cnt[mx])
        {
            printf("?");
            return 0;
        }
    printf("%c", mx+'A');

    return 0;
}
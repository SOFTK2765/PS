#include <bits/stdc++.h>

using namespace std;

char a[251];
bool check[26];

int main()
{
    while(1)
    {
        memset(check, 0, sizeof(check));
        gets(a);
        if(strcmp(a, "#")==0) break;
        int l = strlen(a);
        for(int i=0;i<l;i++)
            if('a'<=a[i] && a[i]<='z') check[a[i]-'a']++;
            else if('A'<=a[i] && a[i]<='Z') check[a[i]-'A']++;
        int cnt = 0;
        for(int i=0;i<26;i++)
            if(check[i]) cnt++;
        printf("%d\n", cnt);
    }

    return 0;
}
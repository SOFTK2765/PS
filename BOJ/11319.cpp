#include <bits/stdc++.h>

using namespace std;

char a[21];
int cnt[52];

int main()
{
    int s;
    scanf("%d", &s);
    while(s--)
    {
        memset(a, 0, sizeof(a));
        memset(cnt, 0, sizeof(cnt));
        scanf(" %[^\n]s", a);
        int l = strlen(a);
        for(int i=0;i<l;i++)
            if('a'<=a[i] && a[i]<='z') cnt[a[i]-'a']++;
            else if('A'<=a[i] && a[i]<='Z') cnt[a[i]-'A'+26]++;
        int suma = 0, sumb = 0;
        for(int i=0;i<52;i++)
            if(i%26==0 || i%26==4 || i%26==8 || i%26==14 || i%26==20) suma += cnt[i];
            else sumb += cnt[i];
        printf("%d %d\n", sumb, suma);
    }

    return 0;
}
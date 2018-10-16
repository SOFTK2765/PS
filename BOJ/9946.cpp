#include <bits/stdc++.h>

using namespace std;

char a[1001], b[1001];
int acheck[26], bcheck[26];

int main()
{
    for(int i=1;;i++)
    {
        memset(a, 0, sizeof(a));
        memset(b, 0, sizeof(b));
        for(int j=0;j<26;j++)
        {
            acheck[j] = 0;
            bcheck[j] = 0;
        }
        scanf(" %s %s", a, b);
        if(strcmp(a, "END")==0 && strcmp(b, "END")==0) break;
        int l = strlen(a);
        if(l!=strlen(b))
        {
            printf("Case %d: different\n", i);
            continue;
        }
        for(int j=0;j<l;j++)
        {
            acheck[a[j]-'a']++;
            bcheck[b[j]-'a']++;
        }
        for(int j=0;j<26;j++)
            if(acheck[j]!=bcheck[j])
            {
                printf("Case %d: different\n", i);
                goto end;
            }
        printf("Case %d: same\n", i);
        end:
        continue;
    }

    return 0;
}
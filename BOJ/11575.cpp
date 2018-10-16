#include <bits/stdc++.h>

using namespace std;

char s[1000001];
char p[26];

int main()
{
    int t;
    scanf("%d", &t);
    while(t--)
    {
        int a, b;
        scanf(" %d %d %s", &a, &b, s);
        int l = strlen(s);
        for(int i=0;i<26;i++)
            p[i] = (i*a+b)%26;
        for(int i=0;i<l;i++)
            printf("%c", p[s[i]-'A']+'A');
        printf("\n");
    }

    return 0;
}
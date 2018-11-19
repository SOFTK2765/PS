#include <bits/stdc++.h>

using namespace std;

char s[10001];
char p[101];

int main()
{
    int t;
    scanf("%d", &t);
    while(t--)
    {
        scanf(" %s %s", s, p);
        int sl = strlen(s), pl = strlen(p), cnt = 0;
        for(int i=0;i<sl;i++)
        {
            int ni = i;
            for(int j=0;j<pl;j++)
            {
                if(s[ni]!=p[j]) break;
                if(j==pl-1)
                {
                    cnt++;
                    i += pl-1;
                }
                if(ni==sl-1)
                {
                    i = ni;
                    break;
                }
                ni++;
            }
        }
        printf("%d\n", cnt+sl-cnt*pl);
    }

    return 0;
}
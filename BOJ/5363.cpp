#include <bits/stdc++.h>

using namespace std;

char a[101];
char s[2][101];

int main()
{
    int n;
    scanf("%d ", &n);
    while(n--)
    {
        memset(a, 0, sizeof(a));
        memset(s, 0, sizeof(s));
        gets(a);
        char *tmp;
        int cnt = 0;
        tmp = strtok(a, " ");
        while(tmp!=NULL)
        {
            if(cnt<2) strcpy(s[cnt], tmp);
            else printf("%s ", tmp);
            cnt++;
            tmp = strtok(NULL, " ");
        }
        printf("%s %s\n", s[0], s[1]);
    }

    return 0;
}
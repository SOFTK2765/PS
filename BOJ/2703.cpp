#include <bits/stdc++.h>

using namespace std;

char a[27];
char tmp[1000];

int main()
{
    int t;
    scanf("%d", &t);
    while(t--)
    {
        memset(tmp, 0, sizeof(tmp));
        scanf(" %[^\n]s", tmp);
        scanf(" %s", a);
        int l = strlen(tmp);
        for(int i=0;i<l;i++)
            printf("%c", tmp[i]==32?' ':a[tmp[i]-'A']);
        printf("\n");
    }

    return 0;
}
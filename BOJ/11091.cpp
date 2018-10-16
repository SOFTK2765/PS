#include <bits/stdc++.h>

using namespace std;

char a[101];
bool check[26];

int main()
{
    int n;
    scanf("%d ", &n);
    while(n--)
    {
        memset(a, 0, sizeof(a));
        for(int i=0;i<26;i++)
            check[i] = false;
        gets(a);
        char *tmp = strtok(a, " ");
        while(tmp!=NULL)
        {
            int l = strlen(tmp);
            for(int i=0;i<l;i++)
            {
                if('a'<=tmp[i] && tmp[i]<='z')
                    check[tmp[i]-'a'] = true;
                else if('A'<=tmp[i] && tmp[i]<='Z')
                    check[tmp[i]-'A'] = true;
            }
            tmp = strtok(NULL, " ");
        }
        for(int i=0;i<26;i++)
            if(!check[i]) goto missing;
        printf("pangram\n");
        continue;
        missing:
        printf("missing ");
        for(int i=0;i<26;i++)
            if(!check[i]) printf("%c", i+'a');
        printf("\n");
    }

    return 0;
}
#include <bits/stdc++.h>

using namespace std;

char a[201];
bool check[26];

int main()
{
    while(1)
    {
        memset(a, 0, sizeof(a));
        for(int i=0;i<26;i++)
            check[i] = false;
        gets(a);
        if(strcmp(a, "*")==0) break;
        char *tmp;
        tmp = strtok(a, " ");
        while(tmp!=NULL)
        {
            int l = strlen(tmp);
            for(int i=0;i<l;i++)
                check[tmp[i]-'a'] = true;
            tmp = strtok(NULL, " ");
        }
        for(int i=0;i<26;i++)
            if(check[i]==false)
            {
                printf("N\n");
                goto end;
            }
        printf("Y\n");
        end:
        continue;
    }

    return 0;
}
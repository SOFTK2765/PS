#include <bits/stdc++.h>

using namespace std;

char a[101];

int main()
{
    scanf("%s", a);
    int l = strlen(a);
    bool flag1 = false, flag2 = false;
    if(a[l-1]=='_')
    {
            printf("Error!");
            return 0;
    }
    for(int i=0;i<l;i++)
    {
        if(i==0 && (a[i]=='_' || 'A'<=a[i] && a[i]<='Z'))
        {
            printf("Error!");
            return 0;
        }
        if(a[i]=='_')
        {
            if(flag2)
            {
                printf("Error!");
                return 0;
            }
            else flag1 = true;
            if(i+1<l && a[i+1]=='_')
            {
                printf("Error!");
                return 0;
            }
        }
        if('A'<=a[i] && a[i]<='Z')
        {
            if(flag1)
            {
                printf("Error!");
                return 0;
            }
            else flag2 = true;
        }
    }
    if(!flag1 && !flag2)
    {
        for(int i=0;i<l;i++)
            printf("%c", a[i]);
    }
    if(flag1)
    {
        for(int i=0;i<l;i++)
        {
            if(a[i]=='_')
            {
                i++;
                if(i==1) printf("%c", a[i]);
                else printf("%c", a[i]-'a'+'A');
            }
            else printf("%c", a[i]);
        }
    }
    if(flag2)
    {
        for(int i=0;i<l;i++)
        {
            if('A'<=a[i] && a[i]<='Z') printf("_%c", a[i]-'A'+'a');
            else printf("%c", a[i]);
        }
    }

    return 0;
}
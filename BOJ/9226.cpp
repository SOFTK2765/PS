#include <bits/stdc++.h>

using namespace std;

char a[21];

int main()
{
    while(1)
    {
        scanf(" %s", a);
        if(strcmp(a, "#")==0) break;
        int l = strlen(a);
        bool flag = false;
        for(int i=0;i<l;i++)
        {
            if(!flag && (a[i]!='a' && a[i]!='e' && a[i]!='i' && a[i]!='o' && a[i]!='u')) continue;
            printf("%c", a[i]);
            flag = true;
        }
        for(int i=0;i<l;i++)
        {
            if(a[i]=='a' || a[i]=='e' || a[i]=='i' || a[i]=='o' || a[i]=='u') break;
            printf("%c", a[i]);
        }
        printf("ay\n");
    }

    return 0;
}
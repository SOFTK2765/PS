#include <bits/stdc++.h>

using namespace std;

char a[256];

int main()
{
    while(1)
    {
        memset(a, 0, sizeof(a));
        scanf(" %[^\n]s", a);
        if(strcmp(a, "#")==0) break;
        int l = strlen(a), k = a[l-1]-'A';
        for(int i=0;i<l-1;i++)
            printf("%c", ('A'<=a[i] && a[i]<='Z')?(a[i]-'A'+26-k)%26+'A':('a'<=a[i] && a[i]<='z')?(a[i]-'a'+26-k)%26+'a':a[i]);
        printf("\n");
    }

    return 0;
}
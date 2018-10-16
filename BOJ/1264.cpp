#include <bits/stdc++.h>

using namespace std;

char a[256];

int main()
{
    while(~scanf(" %[^\n]s", a))
    {
        if(strcmp(a, "#")==0) break;
        int l = strlen(a), cnt = 0;
        for(int i=0;i<l;i++)
            if(a[i]=='a' || a[i]=='e' || a[i]=='i' || a[i]=='o' || a[i]=='u' || a[i]=='A' || a[i]=='E' || a[i]=='I' || a[i]=='O' || a[i]=='U') cnt++;
        printf("%d\n", cnt);
    }

    return 0;
}
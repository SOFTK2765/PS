#include <bits/stdc++.h>

using namespace std;

int main()
{
    while(1)
    {
        char a[32];
        scanf("%s", a);
        if(strcmp(a, "#")==0) break;
        int l = strlen(a);
        int cnt = 0;
        for(int i=0;i<l-1;i++)
            if(a[i]=='1') cnt++;
        for(int i=0;i<l-1;i++)
            printf("%c", a[i]);
        printf("%d\n", cnt%2==1?(a[l-1]=='o'?0:1):(a[l-1]=='e'?0:1));
    }

    return 0;
}
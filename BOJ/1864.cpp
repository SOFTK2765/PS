#include <bits/stdc++.h>

using namespace std;

char a[9];

int main()
{
    while(1)
    {
        scanf(" %s", a);
        if(strcmp(a, "#")==0) break;
        int tmp = 1, l = strlen(a), sum = 0;
        for(int i=l-1;i>=0;i--)
        {
            sum += tmp*(a[i]=='-'?0:a[i]=='\\'?1:a[i]=='('?2:a[i]=='@'?3:a[i]=='?'?4:a[i]=='>'?5:a[i]=='&'?6:a[i]=='%'?7:-1);
            tmp *= 8;
        }
        printf("%d\n", sum);
    }

    return 0;
}
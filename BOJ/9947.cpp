#include <bits/stdc++.h>

using namespace std;

char a[21], b[21];

int main()
{
    while(1)
    {
        memset(a, 0, sizeof(a));
        memset(b, 0, sizeof(b));
        scanf(" %s %s", a, b);
        if(strcmp(a, "#")==0 && strcmp(b, "#")==0) break;
        int n;
        scanf(" %d", &n);
        int cnt1 = 0, cnt2 = 0;
        for(int i=0;i<n;i++)
        {
            char tmp1, tmp2;
            scanf(" %c %c", &tmp1, &tmp2);
            if(tmp1-tmp2) cnt2++;
            else cnt1++;
        }
        printf("%s %d %s %d\n", a, cnt1, b, cnt2);
    }

    return 0;
}
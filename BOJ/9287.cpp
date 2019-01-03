#include <bits/stdc++.h>

using namespace std;

char a[21][4];

int main()
{
    int t;
    scanf("%d", &t);
    for(int tc=1;tc<=t;tc++)
    {
        int n;
        scanf(" %d", &n);
        for(int i=0;i<n;i++)
            scanf(" %s", a[i]);
        bool flag = false;
        for(int i=0;i<n;i++)
        {
            if(strcmp(a[i], "001")==0) flag = true;
            else if(strcmp(a[i], "100")==0) flag = true;
            else if(strcmp(a[i], "000")==0) flag = true;
        }
        printf("Case %d: %s\n", tc, flag?"Fallen":"Standing");
    }

    return 0;
}
#include <bits/stdc++.h>

using namespace std;

char a[10001][11];

int main()
{
    int t;
    scanf("%d", &t);
    while(t--)
    {
        int n;
        scanf(" %d", &n);
        memset(a, 0, sizeof(a));
        for(int i=0;i<n;i++)
            scanf(" %s", a[i]);
        bool flag = false;
        int ind = -1;
        for(int i=0;i<n;i++)
        {
            if(a[i][0]!='#')
            {
                ind = i;
                flag = true;
                continue;
            }
            if(flag) printf("%s ", a[i]);
        }
        if(ind!=-1) printf("%s ", a[ind]);
        for(int i=0;i<n;i++)
        {
            if(a[i][0]!='#') break;
            printf("%s ", a[i]);
        }
        printf("\n");
    }

    return 0;
}
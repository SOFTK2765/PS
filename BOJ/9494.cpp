#include <bits/stdc++.h>

using namespace std;

char a[101];

int main()
{
    while(1)
    {
        int n;
        scanf("%d ", &n);
        if(n==0) break;
        int nh = 0;
        memset(a, 0, sizeof(a));
        gets(a);
        int l = strlen(a);
        for(int i=0;i<l;i++)
        {
            if(a[i]==' ')
            {
                nh = i;
                break;
            }
            if(i==l-1) nh = l;
        }
        for(int i=1;i<n;i++)
        {
            memset(a, 0, sizeof(a));
            gets(a);
            l = strlen(a);
            int pos = nh;
            while(1)
            {
                if(a[pos]==' ' || a[pos]==0)
                {
                    nh = pos;
                    break;
                }
                pos++;
            }
        }
        printf("%d\n", nh+1);
    }

    return 0;
}
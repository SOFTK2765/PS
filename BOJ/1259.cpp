#include <bits/stdc++.h>

using namespace std;

char a[6];

int main()
{
    while(1)
    {
        memset(a, 0, sizeof(a));
        scanf(" %s", a);
        if(a[0]=='0') break;
        int l = strlen(a);
        if(l%2==1)
        {
            for(int i=0;i<l/2+1;i++)
            {
                if(a[l/2-i]!=a[l/2+i])
                {
                    printf("no\n");
                    break;
                }
                if(i==l/2) printf("yes\n");
            }
        }
        else
        {
            for(int i=0;i<l/2;i++)
            {
                if(a[l/2-i-1]!=a[l/2+i])
                {
                    printf("no\n");
                    break;
                }
                if(i==l/2-1) printf("yes\n");
            }
        }
    }

    return 0;
}
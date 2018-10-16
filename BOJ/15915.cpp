#include <bits/stdc++.h>

using namespace std;

char a[1003];

int main()
{
    for(int i=1;i<=1002;i++)
    {
        scanf(" %s", a);
        int l = strlen(a);
        for(int j=0;j<l;j++)
            printf("%d", (a[j]-'0'+1)%3);
    }

    return 0;
}
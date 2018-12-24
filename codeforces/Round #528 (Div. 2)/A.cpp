#include <bits/stdc++.h>

using namespace std;

char a[51];

int main()
{
    scanf("%s", a);
    int l = strlen(a);
    int m = (l-1)/2;
    if(l%2==0)
    {
        for(int i=0;i<=m;i++)
            printf("%c%c", a[m-i], a[m+i+1]);
    }
    else
    {
        printf("%c", a[m]);
        for(int i=1;i<=m;i++)
            printf("%c%c", a[m+i], a[m-i]);
    }

    return 0;
}
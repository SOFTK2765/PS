#include <bits/stdc++.h>

using namespace std;

char a[101];

int main()
{
    scanf("%s", a);
    int l = strlen(a);
    int i;
    for(i=0;i<l/2;i++)
        if(a[i]!=a[l-1-i]) break;
    printf("%d", i==l/2?1:0);

    return 0;
}

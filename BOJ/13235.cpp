#include <bits/stdc++.h>

using namespace std;

char a[20];

int main()
{
    scanf("%s", a);
    int l = strlen(a);
    int i;
    for(i=0;i<l/2;i++)
        if(a[i]!=a[l-1-i]) break;
    printf("%s", i==l/2?"true":"false");
    
    return 0;
}
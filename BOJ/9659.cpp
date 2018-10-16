#include <bits/stdc++.h>

using namespace std;

char a[14];

int main()
{
    scanf("%s", a);
    int l = strlen(a);
    if((a[l-1]-'0')%2==1) printf("SK");
    else printf("CY");
    
    return 0;
}
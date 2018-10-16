#include <bits/stdc++.h>

using namespace std;

char a[4], b[4];

int main()
{
    scanf("%s %s", a, b);
    int ind = 3;
    while(--ind) if(a[ind]!=b[ind]) break;
    if(a[ind]<b[ind]) for(int i=2;i>=0;i--) printf("%c", b[i]);
    else for(int i=2;i>=0;i--) printf("%c", a[i]);

    return 0;
}
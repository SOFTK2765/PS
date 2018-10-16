#include <bits/stdc++.h>

using namespace std;

char a[101];

int main()
{
    gets(a);
    int l = strlen(a);
    for(int i=0;i<l;i++)
    {
        printf("%c", a[i]);
        if(a[i]=='a' || a[i]=='e' || a[i]=='i' || a[i]=='o' || a[i]=='u') i += 2;
    }

    return 0;
}
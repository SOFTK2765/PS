#include <bits/stdc++.h>

using namespace std;

char a[1001];

int main()
{
    while(1)
    {
        gets(a);
        if(strcmp(a, "END")==0) break;
        int l = strlen(a);
        for(int i=0;i<=(l-1)/2;i++)
        {
            char tmp = a[i];
            a[i] = a[l-1-i];
            a[l-1-i] = tmp;
        }
        puts(a);
    }

    return 0;
}
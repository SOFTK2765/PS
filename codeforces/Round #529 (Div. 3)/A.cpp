#include <bits/stdc++.h>

using namespace std;

char a[56];

int main()
{
    int n;
    scanf("%d %s", &n, a);
    int pos = 0;
    for(int i=0;i<10;i++)
    {
        printf("%c", a[pos+i]);
        pos += i;
        if(pos==n-i-1) break;
    }

    return 0;
}
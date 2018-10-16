#include <bits/stdc++.h>

using namespace std;

int a[10];

int main()
{
    int t;
    scanf("%d", &t);
    int pos = 0;
    while(1)
    {
        a[pos++] = t%9;
        if(t/9==0) break;
        t /= 9;
    }
    for(int i=0;i<pos;i++)
        printf("%d", a[pos-i-1]);

    return 0;
}
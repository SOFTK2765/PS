#include <bits/stdc++.h>

using namespace std;

char a[16];

int main()
{
    int v;
    scanf("%d %s", &v, a);
    int t1 = 0, t2 = 0;
    for(int i=0;i<v;i++)
        if(a[i]=='A') t1++;
        else t2++;
    printf("%s", t1>t2?"A":(t1==t2)?"Tie":"B");

    return 0;
}
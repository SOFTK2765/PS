#include <bits/stdc++.h>

using namespace std;

int main()
{
    int tmp, mn1 = 987654321, mn2 = 987654321;
    for(int i=0;i<3;i++)
    {
        scanf(" %d", &tmp);
        if(mn1>tmp) mn1 = tmp;
    }
    for(int i=0;i<2;i++)
    {
        scanf(" %d", &tmp);
        if(mn2>tmp) mn2 = tmp;
    }
    printf("%d", mn1+mn2-50);
    
    return 0;
}
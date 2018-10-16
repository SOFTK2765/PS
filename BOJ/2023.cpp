#include <bits/stdc++.h>

using namespace std;

int n;

bool pn(int cn)
{
    if(cn==1) return false;
    for(int i=2;i*i<=cn;i++)
        if(cn%i==0) return false;
    return true;
}

void f(int pos, int num)
{
    if(n==pos)
    {
        printf("%d\n", num);
        return;
    }
    for(int i=1;i<10;i++)
        if(pn(num*10+i)) f(pos+1, num*10+i);
}

int main()
{
    scanf("%d", &n);
    f(0, 0);

    return 0;
}
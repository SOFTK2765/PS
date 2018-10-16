#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a, cnt = 1;
    scanf("%d", &a);
    while(a!=1)
    {
        if(a%2==0) a /= 2;
        else a = a*3+1;
        cnt++;
    }
    printf("%d", cnt);

    return 0;
}
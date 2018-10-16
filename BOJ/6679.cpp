#include <bits/stdc++.h>

using namespace std;

int f(int a, int b)
{
    int sum = 0;
    while(1)
    {
        sum += a%b;
        if(a/b==0) break;
        a /= b;
    }

    return sum;
}

int main()
{
    for(int i=1000;i<10000;i++)
        if(f(i, 10)==f(i, 12) && f(i, 10)==f(i, 16)) printf("%d\n", i);

    return 0;
}
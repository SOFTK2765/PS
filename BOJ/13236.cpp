#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    scanf("%d", &n);
    while(1)
    {
        printf("%d ", n);
        if(n==1) break;
        else if(n%2==0) n /= 2;
        else n = n*3+1;
    }

    return 0;
}
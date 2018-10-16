#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    scanf("%d", &n);
    int a = 1, b = 1;
    for(int i=1;i<=n;i++)
    {
        if(i%2==1) a++;
        else b++;
    }
    printf("%d", a*b);

    return 0;
}
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    scanf("%d", &n);
    int a = 0, b = 0;
    while(n--)
    {
        int t1, t2;
        scanf(" %d %d", &t1, &t2);
        if(t1>t2) a++;
        else if(t1<t2) b++;
    }
    printf("%d %d", a, b);

    return 0;
}
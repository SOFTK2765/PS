#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    scanf("%d", &n);
    int tmp1 = 1, tmp2 = 2, tmp;
    if(n==1) printf("1");
    else if(n==2) printf("2");
    else
    {
        for(int i=3;i<=n;i++)
        {
            tmp = tmp2;
            (tmp2 += tmp1) %= 10;
            tmp1 = tmp;
        }
        printf("%d", tmp2);
    }

    return 0;
}
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    scanf("%d", &n);
    for(int i=0;i<n;i++)
    {
        int a, b;
        scanf(" %d %d", &a, &b);
        int suma = 0, sumb = 0;
        while(a)
        {
            suma *= 10;
            suma += a%10;
            a /= 10;
        }
        while(b)
        {
            sumb *= 10;
            sumb += b%10;
            b /= 10;
        }
        int res = suma+sumb, ressum = 0;
        while(res)
        {
            ressum *= 10;
            ressum += res%10;
            res /= 10;
        }
        printf("%d\n", ressum);
    }

    return 0;
}
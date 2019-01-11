#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    scanf("%d", &t);
    while(t--)
    {
        int n;
        scanf("%d", &n);
        int sum = 0;
        double sumf = 0;
        for(int i=0;i<n;i++)
        {
            int tmp1;
            double tmp2;
            scanf(" %d %lf", &tmp1, &tmp2);
            sum += tmp1;
            sumf += tmp2*tmp1;
        }
        printf("%d %.1lf\n", sum, sumf/sum+2e-9);
    }

    return 0;
}
#include <bits/stdc++.h>

using namespace std;

int a[8];

int main()
{
    int n;
    scanf("%d", &n);
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<7;j++)
            scanf(" %d", &a[j]);
        int sum = 0;
        sum += 9.23076*pow(26.7-a[0], 1.835);
        sum += 1.84523*pow(a[1]-75, 1.348);
        sum += 56.0211*pow(a[2]-1.5, 1.05);
        sum += 4.99087*pow(42.5-a[3], 1.81);
        sum += 0.188807*pow(a[4]-210, 1.41);
        sum += 15.9803*pow(a[5]-3.8, 1.04);
        sum += 0.11193*pow(254-a[6], 1.88);
        printf("%d\n", sum);
    }

    return 0;
}
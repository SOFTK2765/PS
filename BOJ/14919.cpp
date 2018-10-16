#include <bits/stdc++.h>

using namespace std;

double a[1000001];

int main()
{
    int m;
    scanf("%d", &m);
    int ind = 0;
    while(scanf(" %lf", &a[ind++])!=EOF);
    for(int i=1;i<=m;i++)
    {
        int cnt = 0;
        for(int j=0;j<ind-1;j++)
            if((1.0*(i-1)/m <= a[j]) && (a[j] < 1.0*i/m)) cnt++;
        printf("%d ", cnt);
    }

    return 0;
}
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    scanf("%d", &n);
    for(int i=0;i<n;i++)
    {
        double tmp;
        scanf(" %lf", &tmp);
        printf("$%.2f\n", tmp*0.8);
    }

    return 0;
}
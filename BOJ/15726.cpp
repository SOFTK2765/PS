#include <bits/stdc++.h>

using namespace std;

long long a[3];

int main()
{
    for(int i=0;i<3;i++)
        scanf(" %lld", &a[i]);
    printf("%lld", (long long)((double)(a[0]*a[1]/a[2]))<(long long)((double)(a[0]*a[2]/a[1]))?(long long)((double)(a[0]*a[2]/a[1])):(long long)((double)(a[0]*a[1]/a[2])));

    return 0;
}
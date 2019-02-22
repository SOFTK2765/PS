#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a, b, n;
    scanf("%d %d %d", &a, &b, &n);
    for(int i=0;i<n;i++)
        printf("%d ", b*(i+1)+a*n);

    return 0;
}
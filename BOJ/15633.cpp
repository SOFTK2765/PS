#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    scanf("%d", &n);
    int sum = 0;
    for(int i=1;i<=n;i++)
        if(n%i==0) sum += i;
    printf("%d", sum*5-24);

    return 0;
}
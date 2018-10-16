#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a[4];
    int b[2];
    for(int i=0;i<4;i++)
        scanf("%d", &a[i]);
    for(int i=0;i<2;i++)
        scanf("%d", &b[i]);
    sort(a, a+4);
    sort(b, b+2);
    int sum = 0;
    for(int i=1;i<4;i++)
        sum += a[i];
    sum += b[1];
    printf("%d", sum);

    return 0;
}
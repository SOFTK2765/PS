#include <bits/stdc++.h>

using namespace std;

int a[100001];

int main()
{
    int n;
    scanf("%d", &n);
    for(int i=0;i<n;i++)
        scanf(" %d", &a[i]);
    sort(a, a+n);
    int tmp = 12345;
    for(int i=0;i<n;i++)
        if(tmp!=a[i])
        {
            printf("%d ", a[i]);
            tmp = a[i];
        }

    return 0;
}
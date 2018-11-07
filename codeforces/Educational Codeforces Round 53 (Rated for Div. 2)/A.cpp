#include <bits/stdc++.h>

using namespace std;

char a[1001];

int main()
{
    int n;
    scanf("%d %s", &n, a);
    for(int i=0;i<n-1;i++)
        if(a[i]!=a[i+1])
        {
            printf("YES\n%c%c", a[i], a[i+1]);
            return 0;
        }
    printf("NO");

    return 0;
}
#include <bits/stdc++.h>

using namespace std;

int a[101];

int main()
{
    int n;
    scanf("%d", &n);
    for(int i=0;i<n;i++)
        scanf("%d", &a[i]);
    int v;
    scanf("%d", &v);
    int cnt = 0;
    for(int i=0;i<n;i++)
        if(a[i]==v) cnt++;
    printf("%d", cnt);

    return 0;
}
#include <bits/stdc++.h>

using namespace std;

int a[1001];

int main()
{
    int n;
    scanf("%d", &n);
    int cnt = 0;
    for(int i=0;i<n;i++)
        scanf(" %d", &a[i]);
    for(int i=0;i<n;i++)
        if(a[i]==cnt%3) cnt++;
    printf("%d", cnt);

    return 0;
}
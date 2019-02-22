#include <bits/stdc++.h>

using namespace std;

char a[1001];

int main()
{
    int n;
    scanf("%d %s", &n, a);
    int cnt = 0;
    for(int i=0;i<n-1;i++)
        if(a[i]=='E' && a[i+1]=='W') cnt++;
    printf("%d", cnt);

    return 0;
}
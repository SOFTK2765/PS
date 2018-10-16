#include <bits/stdc++.h>

using namespace std;

int a[2001], b[2001];

int main()
{
    int n;
    scanf("%d", &n);
    for(int i=0;i<n;i++)
        scanf(" %d", &a[i]);
    for(int i=0;i<n;i++)
        scanf(" %d", &b[i]);
    int cnt = 0;
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            if((a[i]^b[j])%2==0) cnt++;
    cnt%2==0?printf("Karen"):printf("Koyomi");

    return 0;
}
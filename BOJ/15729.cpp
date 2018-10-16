#include <bits/stdc++.h>

using namespace std;

int a[1000001], b[1000001];

int main()
{
    int n;
    scanf("%d", &n);
    for(int i=0;i<n;i++)
        scanf(" %d", &a[i]);
    int cnt = 0;
    for(int i=0;i<n;i++)
        if(a[i]!=b[i])
        {
            b[i] = b[i]==0?1:0;
            if(i+1<n) b[i+1] = b[i+1]==0?1:0;
            if(i+2<n) b[i+2] = b[i+2]==0?1:0;
            cnt++;
        }
    printf("%d", cnt);

    return 0;
}
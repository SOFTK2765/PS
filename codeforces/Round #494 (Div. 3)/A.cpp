#include <bits/stdc++.h>

using namespace std;

int cnt[101];

int main()
{
    int n;
    scanf("%d", &n);
    for(int i=0;i<n;i++)
    {
        int tmp;
        scanf(" %d", &tmp);
        cnt[tmp]++;
    }
    int mx = 0;
    for(int i=0;i<101;i++)
        if(mx<cnt[i]) mx = cnt[i];
    printf("%d", mx);

    return 0;
}
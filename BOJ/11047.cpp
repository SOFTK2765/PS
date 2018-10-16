#include <bits/stdc++.h>

using namespace std;

int a[11];

int main()
{
    int n, k;
    scanf("%d %d", &n, &k);
    for(int i=0;i<n;i++)
        scanf(" %d", &a[i]);
    int pos = n-1, cnt = 0;
    while(k>0)
    {
        if(k/a[pos]>0)
        {
            cnt += (k/a[pos]);
            k %= a[pos];
        }
        else pos--;
        if(pos<0)
        {
            cnt++;
            break;
        }
    }
    printf("%d", cnt);

    return 0;
}
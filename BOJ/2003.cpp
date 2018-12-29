#include <bits/stdc++.h>

using namespace std;

int a[10001];

int main()
{
    int n, m;
    scanf("%d %d", &n, &m);
    for(int i=0;i<n;i++)
        scanf(" %d", &a[i]);
    int posa = 0, posb = 0, sum = a[0], cnt = 0;
    while(posb<n)
    {
        if(sum<m) sum += a[++posb];
        else if(sum>m) sum -= a[posa++];
        else
        {
            cnt++;
            sum += a[++posb];
        }
    }
    printf("%d", cnt);

    return 0;
}
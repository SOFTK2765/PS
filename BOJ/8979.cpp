#include <bits/stdc++.h>

using namespace std;

int a[1001][4];

int main()
{
    int n, k;
    scanf("%d %d", &n, &k);
    for(int i=0;i<n;i++)
        scanf(" %d %d %d %d", &a[i][0], &a[i][1], &a[i][2], &a[i][3]);
    int c;
    for(int i=0;i<n;i++)
        if(a[i][0] == k)
        {
            c = i;
            break;
        }
    int g = a[c][1], s = a[c][2], b = a[c][3];
    int cnt = 1;
    for(int i=0;i<n;i++)
    {
        if(a[i][1] > g)
        {
            cnt++;
            continue;
        }
        else if(a[i][1] < g) continue;
        if(a[i][2] > s)
        {
            cnt++;
            continue;
        }
        else if(a[i][2] < s) continue;
        if(a[i][3] > b)
        {
            cnt++;
            continue;
        }
    }
    printf("%d", cnt);

    return 0;
}
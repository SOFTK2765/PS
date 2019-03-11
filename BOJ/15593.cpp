#include <bits/stdc++.h>

using namespace std;

pair<int, int> a[101];
bool check[1001];

int main()
{
    int n;
    scanf("%d", &n);
    for(int i=0;i<n;i++)
        scanf(" %d %d", &a[i].first, &a[i].second);
    int mx = 0;
    for(int i=0;i<n;i++)
    {
        memset(check, 0, sizeof(check));
        for(int j=0;j<n;j++)
            if(j!=i)
                for(int k=a[j].first;k<a[j].second;k++)
                    check[k] = true;
        int cnt = 0;
        for(int j=0;j<1001;j++)
            if(check[j]) cnt++;
        mx = max(mx, cnt);
    }
    printf("%d", mx);

    return 0;
}
#include <bits/stdc++.h>

using namespace std;

pair<int, int> a[100001];

int main()
{
    int n;
    scanf("%d", &n);
    for(int i=0;i<n;i++)
    {
        scanf(" %d", &a[i].first);
        a[i].second = i;
    }
    sort(a, a+n);
    //second로 LIS구해서 n-LIS
    for(int i=0;i<n;i++)
    {
        int mx = 0;
        for(int j=i-1;j>=0;j--)
            
    }

    return 0;
}
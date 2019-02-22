#include <bits/stdc++.h>

using namespace std;

int a[1001];

int main()
{
    int n;
    scanf("%d", &n);
    for(int i=0;i<n;i++)
        scanf("%d", &a[i]);
    vector<pair<int, int>> v;
    for(int i=0;i<n;i++)
    {
        if(a[i]==i+1) continue;
        int ind = i;
        for(int j=i;j<n;j++)
            if(a[j]==i+1) ind = j;
        for(int j=0;j<(ind-i+1)/2;j++)
            swap(a[i+j], a[ind-j]);
        v.push_back({i+1, ind+1});
    }
    int size = v.size();
    printf("%d\n", size);
    for(int i=0;i<size;i++)
        printf("%d %d\n", v[i].first, v[i].second);

    return 0;
}
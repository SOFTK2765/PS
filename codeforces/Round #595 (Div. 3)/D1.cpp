#include <bits/stdc++.h>

using namespace std;

pair<int, int> a[201];
int check[201];

int main()
{
    int n, k;
    scanf("%d %d", &n, &k);
    for(int i=0;i<n;i++)
        scanf(" %d %d", &a[i].first, &a[i].second);
    sort(a, a+n);
    vector<int> v;
    for(int i=0;i<n;i++)
    {
        bool flag = false;
        for(int j=a[i].first;j<=a[i].second;j++)
            if(check[j]>=k)
            {
                v.push_back(i+1);
                flag = true;
                break;
            }
        if(flag) continue;
        for(int j=a[i].first;j<=a[i].second;j++)
            check[j]++;
    }
    int size = v.size();
    printf("%d\n", size);
    for(int i=0;i<size;i++)
        printf("%d ", v[i]);

    return 0;
}
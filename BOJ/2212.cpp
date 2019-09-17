#include <bits/stdc++.h>

using namespace std;

int a[10001];

int main()
{
    int n, k;
    scanf("%d %d", &n, &k);
    for(int i=0;i<n;i++)
        scanf(" %d", &a[i]);
    sort(a, a+n);
    vector<int> v;
    for(int i=0;i<n-1;i++)
        v.push_back(a[i+1]-a[i]);
    sort(v.begin(), v.end());
    int sum = 0;
    for(int i=0;i<n-k;i++)
        sum += v[i];
    printf("%d", sum);

    return 0;
}
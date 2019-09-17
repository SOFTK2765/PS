#include <bits/stdc++.h>

using namespace std;

int a[1001];

int main()
{
    int n;
    scanf("%d", &n);
    for(int i=0;i<n;i++)
        scanf(" %d", &a[i]);
    vector<int> v;
    v.push_back(a[0]);
    for(int i=1;i<n;i++)
        if(a[i]>v.back()) v.push_back(a[i]);
        else v[lower_bound(v.begin(), v.end(), a[i])-v.begin()] = a[i];
    printf("%d", v.size());

    return 0;
}
#include <bits/stdc++.h>

using namespace std;

int a[500001];

int main()
{
    int n;
    scanf("%d", &n);
    for(int i=0;i<n;i++)
        scanf(" %d", &a[i]);
    vector<int> v;
    v.push_back(a[0]);
    int cnt = 0;
    for(int i=1;i<n;i++)
        if(a[i]>=v[i-1])
        {
            v.push_back(a[i]);
            cnt++;
        }
        else v[lower_bound(v.begin(), v.end(), a[i])-v.begin()] = a[i];
    printf("%d", n-cnt);

    return 0;
}
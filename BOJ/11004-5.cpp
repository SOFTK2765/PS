#include <bits/stdc++.h>

using namespace std;

int a[5000001];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, k;
    cin >> n >> k;
    for(int i=0;i<n;i++) cin >> a[i];
    sort(a, a+n);
    cout << a[k-1];

    return 0;
}
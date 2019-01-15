#include <bits/stdc++.h>

using namespace std;

pair<int, int> a[10001];

int main()
{
    int n;
    scanf("%d", &n);
    for(int i=0;i<n;i++)
    {
        scanf(" %d %d", &a[i].first, &a[i].second);
    }
    for(int i=0;i<n;i++)
        cout << a[i].first << " " << a[i].second << endl;

    return 0;
}
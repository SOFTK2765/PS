#include <bits/stdc++.h>

using namespace std;

string a[101];

int main()
{
    int n;
    scanf("%d", &n);
    for(int i=0;i<n;i++)
        cin >> a[i];
    for(int i=0;i<n;i++)
        sort(a[i].begin(), a[i].end());
    sort(a, a+n);
    string tmp = "";
    int cnt = 0;
    for(int i=0;i<n;i++)
        if(a[i]!=tmp)
        {
            cnt++;
            tmp = a[i];
        }
    printf("%d", cnt);

    return 0;
}
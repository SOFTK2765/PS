#include <bits/stdc++.h>

using namespace std;

int a[2000001];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    int tmp;
    for(int i=0;i<n;i++)
    {
        cin >> tmp;
        a[tmp+1000000]++;
    }
    for(int i=0;i<2000001;i++)
        while(a[i]--) cout << i-1000000 << endl;

    return 0;
}
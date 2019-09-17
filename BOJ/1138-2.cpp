#include <bits/stdc++.h>

using namespace std;

int a[11];

int main()
{
    int n;
    scanf("%d", &n);
    for(int i=1;i<=n;i++)
        scanf(" %d", &a[i]);
    vector<int> v;
    v.push_back(n);
    for(int i=n-1;i>=1;i--)
    {
        int cnt = 0;
        bool flag = false;
        for(int j=0;j<n-i;j++)
        {
            if(cnt==a[i])
            {
                v.insert(v.begin()+j, i);
                flag = true;
                break;
            }
            if(v[j]>i) cnt++;
        }
        if(!flag) v.push_back(i);
    }
    for(int i=0;i<n;i++)
        printf("%d ", v[i]);

    return 0;
}
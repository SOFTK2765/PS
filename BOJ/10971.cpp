#include <bits/stdc++.h>

using namespace std;

int a[11][11];

int main()
{
    int n;
    scanf("%d", &n);
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            scanf(" %d", &a[i][j]);
    vector<int> v;
    for(int i=0;i<n;i++)
        v.push_back(i);
    int mn = 987654321;
    do
    {
        int sum = 0;
        bool flag = false;
        for(int i=0;i<n-1;i++)
        {
            if(a[v[i]][v[i+1]]) sum += a[v[i]][v[i+1]];
            else
            {
                flag = true;
                break;
            }
        }
        if(a[v[n-1]][v[0]]) sum += a[v[n-1]][v[0]];
        else flag = true;
        if(!flag) mn = min(mn, sum);
    }while(next_permutation(v.begin(), v.end()));
    printf("%d", mn);

    return 0;
}
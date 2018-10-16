#include <bits/stdc++.h>

using namespace std;

int a[501];
bool check[501];

int main()
{
    int n;
    scanf("%d", &n);
    vector<int> v;
    for(int i=0;i<n;i++)
    {
        int tmp;
        scanf("%d", &tmp);
        v.push_back(tmp);
    }
    long long sum = 0;
    while(n--)
    {
        int size = v.size();
        if(size<=1) break;
        int mn = 987654321, ind1, ind2;
        for(int i=0;i<n;i++)
            if(abs(v[i]-v[i+1])<mn)
            {
                mn = abs(v[i]-v[i+1]);
                ind1 = i;
                ind2 = i+1;
            }
        printf("%d ", mn);
        sum += mn;
        if(v[ind1]<v[ind2]) v.erase(v.begin()+ind1);
        else v.erase(v.begin()+ind2);
    }
    printf("%lld", sum);

    return 0;
}
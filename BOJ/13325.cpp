#include <bits/stdc++.h>

using namespace std;

int a[4000001];

int main()
{
    int k;
    scanf("%d", &k);
    int n = (int)pow(2, k+1);
    int sum = 0;
    for(int i=2;i<n;i++)
    {
        scanf("%d", &a[i]);
        sum += a[i];
    }
    int mx = 0;
    for(int i=n/2;i<n;i++)
    {
        int pos = i, sum = 0;
        while(pos>1)
        {
            sum += a[pos];
            pos /= 2;
        }
        if(mx<sum) mx = sum;
    }

    return 0;
}
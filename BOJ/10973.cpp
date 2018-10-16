#include <bits/stdc++.h>

using namespace std;

int a[10001];
bool check[10001] = {};

bool cmp(const int &a, const int &b){return a>b;}

int main()
{
    int n;
    scanf("%d", &n);
    for(int i=0;i<n;i++)
        scanf(" %d", &a[i]);
    if(n==1)
        {
            printf("%d", -1);
            return 0;
        }
    for(int i=0;i<n-1;i++)
    {
        if(a[i]>a[i+1]) break;
        if(i==n-2)
        {
            printf("%d", -1);
            return 0;
        }
    }
    check[n-1] = true;
    int pos = 0;
    while(1)
    {
        if(a[n-2-pos]>a[n-1-pos])
        {
            int ti;
            for(int i=0;i<n;i++)
            {
                if(check[i] && a[i]>a[n-2-pos]) ti = i-1;
                if(i==n-1) ti = n-1;
            }
            int tmp;
            tmp = a[n-2-pos];
            a[n-2-pos] = a[ti];
            a[ti] = tmp;
            break;
        }
        else
        {
            check[n-2-pos] = true;
            pos++;
        }
    }
    sort(a+n-1-pos, a+n, cmp);
    for(int i=0;i<n;i++)
        printf("%d ", a[i]);

    return 0;
}
#include <bits/stdc++.h>

using namespace std;

string a[21], b[21];

bool cmp(const string &a, const string &b){return a>b;}

int main()
{
    int n;
    scanf("%d", &n);
    for(int i=0;i<n;i++)
    {
        cin >> a[i];
        b[i] = a[i];
    }
    sort(b, b+n);
    for(int i=0;i<n;i++)
    {
        if(a[i]!=b[i]) break;
        if(i==n-1)
        {
            printf("INCREASING");
            return 0;
        }
    }
    sort(b, b+n, cmp);
    for(int i=0;i<n;i++)
    {
        if(a[i]!=b[i]) break;
        if(i==n-1)
        {
            printf("DECREASING");
            return 0;
        }
    }
    printf("NEITHER");

    return 0;
}
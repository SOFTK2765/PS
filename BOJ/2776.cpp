#include <stdio.h>
#include <algorithm>

using namespace std;

int n, m, b;
int a[1000001];

bool binsearch(int *a, int *b, int num)
{
    int l=0, r=b-a;
    while(l<=r)
    {
        int m=(l+r)/2;
        if(a[m]==num)
            return true;
        if(a[m]<num)
            l=m+1;
        else
            r=m-1;
    }
    return false;
}

int main()
{
    int t;
    scanf("%d", &t);
    while(t--)
    {
        scanf("%d", &n);
        for(int i=0;i<n;i++)
            scanf("%d", &a[i]);
        sort(a, a+n);
        scanf("%d", &m);
        for(int i=0;i<m;i++)
        {
            scanf("%d", &b);
            printf("%d\n", binsearch(a, a+n-1, b)?1:0);
        }
    }
    
    return 0;
}
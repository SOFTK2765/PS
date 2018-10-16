#include <bits/stdc++.h>

using namespace std;

struct seq
{
    int ind;
    int num;
};

bool cmp(const seq &a, const seq &b)
{
    return a.num>b.num;
}

seq a[1001];

int main()
{
    int n;
    scanf("%d", &n);
    for(int i=0;i<n;i++)
    {
        scanf("%d", &a[i].num);
        a[i].ind = i;
    }
    sort(a, a+n, cmp);
    int cnt = 0;
    for(int i=0;i<n-1;i++)
    {
        int s = a[i].num;
        for(int j=i+1;j<n;j++)
        {
            if(s>a[j].num)
            {

            }
            else
            {
                if(a[j].ind<minind);
            }
        }
    }

            

    return 0;
}
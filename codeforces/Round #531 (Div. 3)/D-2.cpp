#include <bits/stdc++.h>

using namespace std;

int a[300001];

int main()
{
    int n;
    scanf("%d", &n);
    queue<int> q0, q1, q2;
    for(int i=0;i<n;i++)
    {
        scanf("%1d", &a[i]);
        if(a[i]==0) q0.push(i);
        else if(a[i]==1) q1.push(i);
        else if(a[i]==2) q2.push(i);
    }
    int size0 = q0.size(), size1 = q1.size(), size2 = q2.size(), msize0 = size0-(n/3), msize1 = size1-(n/3), msize2 = size2-(n/3);
    for(int i=0;i<n;i++)
    {
        if(msize0<0) printf("0");
        if(msize1<0) printf("1");
        if(msize2<0) printf("2");
    }

    return 0;
}
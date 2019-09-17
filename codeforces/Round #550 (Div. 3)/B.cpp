#include <bits/stdc++.h>

using namespace std;

int a1[2001], a2[2001];

int main()
{
    int n;
    scanf("%d", &n);
    int cnt1 = 0, cnt2 = 0, sum = 0;
    for(int i=0;i<n;i++)
    {
        int tmp;
        scanf(" %d", &tmp);
        sum += tmp;
        if(tmp%2==1) a1[cnt1++] = tmp;
        else a2[cnt2++] = tmp;
    }
    sort(a1, a1+cnt1);
    sort(a2, a2+cnt2);
    int pos1 = cnt1-1, pos2 = cnt2-1, sum1 = 0, sum2 = 0;
    while(pos1>=0)
    {
        sum1 += a1[pos1--];
        if(pos2<0) break;
        sum1 += a2[pos2--];
    }
    pos1 = cnt1-1;
    pos2 = cnt2-1;
    while(pos2>=0)
    {
        sum2 += a2[pos2--];
        if(pos1<0) break;
        sum2 += a1[pos1--];
    }
    printf("%d", min(sum-sum1, sum-sum2));

    return 0;
}
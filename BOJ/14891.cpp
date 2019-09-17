#include <bits/stdc++.h>

using namespace std;

unsigned char a[4];

void f(int tmp1, int tmp2, unsigned char check)
{
    if(tmp1-1>=0 && !((check>>(tmp1-1))&1) && ((a[tmp1]>>6)&1)^((a[tmp1-1]>>2)&1)) f(tmp1-1, -tmp2, check+(1<<tmp1));
    if(tmp1+1<4 && !((check>>(tmp1+1))&1) && ((a[tmp1]>>2)&1)^((a[tmp1+1]>>6)&1)) f(tmp1+1, -tmp2, check+(1<<tmp1));
    if(tmp2==1)
    {
        int tmp = (a[tmp1]>>7)&1;
        a[tmp1] = (a[tmp1]<<1)+tmp;
    }
    else if(tmp2==-1)
    {
        int tmp = a[tmp1]&1?1:0;
        a[tmp1] = (a[tmp1]>>1)+((1&tmp)<<7);
    }
}

int main()
{
    for(int i=0;i<4;i++)
    {
        string tmp;
        cin >> tmp;
        for(int j=0;j<8;j++)
            a[i] += ((tmp[j]-'0')&1)<<j;
    }
    int k;
    scanf(" %d", &k);
    for(int i=0;i<k;i++)
    {
        int tmp1, tmp2;
        scanf(" %d %d", &tmp1, &tmp2);
        f(tmp1-1, tmp2, 0);
    }
    int sum = 0;
    for(int i=0;i<4;i++)
        sum += (a[i]&1)*(1<<i);
    printf("%d", sum);

    return 0;
}
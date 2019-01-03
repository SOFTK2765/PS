#include <bits/stdc++.h>

using namespace std;

int pn[169];
int res[3];
bool check;
int n;

void f(int pos, int ni, int sum)
{
    if(pos==3)
    {
        if(sum==n)
        {
            printf("%d %d %d\n", res[0], res[1], res[2]);
            check = true;
        }
        return;
    }
    for(int i=ni;i<168 && !check;i++)
    {
        sum += pn[i];
        res[pos] = pn[i];
        f(pos+1, i, sum);
        sum -= pn[i];
    }
}

int main()
{
    pn[0] = 2;
    int pos = 1;
    for(int i=3;i<=1000;i+=2)
    {
        bool flag = false;
        for(int j=3;j*j<=i;j+=2)
        {
            if(i%j==0)
            {
                flag = true;
                break;
            }
        }
        if(!flag) pn[pos++] = i;
    }
    int t;
    scanf("%d", &t);
    while(t--)
    {
        check = false;
        scanf(" %d", &n);
        f(0, 0, 0);
        if(!check) printf("0\n");
    }

    return 0;
}
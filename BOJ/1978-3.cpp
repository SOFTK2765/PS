#include <bits/stdc++.h>

using namespace std;

const int a32[] = {2, 7, 61};

bool miller_rabin_32(int n)
{
    if(n<2) return false;
    int d = n-1, s = 0;
    while(d%2==0)
    {
        s++;
        d /= 2;
    }
    for(int i=0;i<3;i++)
    {
        if(n<=a32[i]) break;
        unsigned long long tmp = 1, mtmp = a32[i];
        int td = d;
        while(td)
        {
            if(td%2) (tmp *= mtmp) %= n;
            (mtmp *= mtmp) %= n;
            td /= 2;
        }
        if(tmp==1 || tmp==-1 || tmp==n-1) continue;
        bool flag = false;
        for(int j=0;j<s;j++)
        {
            (tmp *= tmp) %= n;
            if(tmp==-1 || tmp==n-1)
            {
                flag = true;
                break;
            }
        }
        if(!flag) return false;
    }
    return true;
}

int main()
{
    int n;
    scanf("%d", &n);
    int tmp, cnt = 0;
    for(int i=0;i<n;i++)
    {
        scanf(" %d", &tmp);
        if(miller_rabin_32(tmp)) cnt++;
    }
    printf("%d", cnt);

    return 0;
}
#include <bits/stdc++.h>

using namespace std;

int n;
int res[81];

bool f(int pos)
{
    if(pos==n)
    {
        for(int i=0;i<n;i++)
            printf("%d", res[i]);
        return true;
    }
    for(int i=1;i<=3;i++)
    {
        res[pos] = i;
        bool flag = false;
        for(int j=1;2*j-1<=pos;j++)
        {
            bool tmpflag = false;
            for(int k=pos-j+1;k<=pos;k++)
            {
                if(res[k]!=res[k-j])
                {
                    tmpflag = true;
                    break;
                }
            }
            if(tmpflag) continue;
            else
            {
                flag = true;
                break;
            }
        }
        if(!flag && f(pos+1)) return true;
    }
    return false;
}

int main()
{
    scanf("%d", &n);
    res[0] = 1;
    f(1);

    return 0;
}
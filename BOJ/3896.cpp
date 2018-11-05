#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    scanf("%d", &t);
    while(t--)
    {
        int k;
        scanf(" %d", &k);
        int tmp = k, cnt = 0;
        while(1)
        {
            bool flag = false;
            if(tmp==2) break;
            if(tmp%2==0)
            {
                cnt++;
                tmp--;
                flag = true;
                continue;
            }
            for(int i=3;i*i<=tmp;i+=2)
                if(tmp%i==0)
                {
                    cnt++;
                    tmp--;
                    flag = true;
                    break;
                }
            if(!flag) break;
        }
        if(cnt!=0)
        {
            tmp = k+1;
            if(tmp==2) break;
            while(1)
            {
                bool flag = false;
                if(tmp%2==0)
                {
                    cnt++;
                    tmp++;
                    flag = true;
                    continue;
                }
                for(int i=3;i*i<=tmp;i+=2)
                    if(tmp%i==0)
                    {
                        cnt++;
                        tmp++;
                        flag = true;
                        break;
                    }
                if(!flag) break;
            }
        }
        printf("%d\n", cnt!=0?cnt+1:cnt);
    }

    return 0;
}
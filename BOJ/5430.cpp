#include <bits/stdc++.h>

using namespace std;

char a[100001];

int main()
{
    int t;
    scanf("%d", &t);
    while(t--)
    {
        int n;
        scanf(" %s %d %*c", a, &n);
        if(n==0) scanf("%*c");
        deque<int> dq;
        for(int i=0;i<n;i++)
        {
            int tmp;
            scanf("%d%*c", &tmp);
            dq.push_back(tmp);
        }
        int l = strlen(a);
        bool rev = false, flag = false;
        for(int i=0;i<l;i++)
        {
            if(a[i]=='R') rev = rev?false:true;
            else
            {
                if(dq.empty())
                {
                    printf("error\n");
                    flag = true;
                    break;
                }
                else
                {
                    if(!rev) dq.pop_front();
                    else dq.pop_back();
                }
            }
        }
        if(!flag)
        {
            int size = dq.size();
            printf("[");
            for(int i=0;i<size;i++)
            {
                printf("%d", !rev?dq.front():dq.back());
                if(!rev) dq.pop_front();
                else dq.pop_back();
                if(i!=size-1) printf(",");
            }
            printf("]\n");
        }
    }

    return 0;
}
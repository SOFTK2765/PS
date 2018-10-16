#include <bits/stdc++.h>

using namespace std;

int main()
{
    int q;
    scanf("%d", &q);
    deque<int> dq;
    for(int i=0;i<q;i++)
    {
        char tmp1;
        int tmp2;
        scanf(" %c %d", &tmp1, &tmp2);
        if(tmp1=='L') dq.push_front(tmp2);
        else if(tmp1=='R') dq.push_back(tmp2);
        else
        {
            int size = dq.size(), s1, s2;
            while(size--)
            {
                int tmp = dq.front();
                if(tmp==tmp2) s1 = size;
                dq.push_back(tmp);
                dq.pop_front();
            }
            size = dq.size();
            while(size--)
            {
                int tmp = dq.back();
                if(tmp==tmp2) s2 = size;
                dq.push_front(tmp);
                dq.pop_back();
            }
            min(s1, s2);
            printf("%d\n", min(s1, s2));
        }
    }

    return 0;
}
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    scanf("%d", &t);
    while(t--)
    {
        int m;
        scanf(" %d", &m);
        priority_queue<int> mnpq, mxpq;
        vector<int> v;
        for(int i=0;i<m;i++)
        {
            int tmp;
            scanf(" %d", &tmp);
            if(mxpq.empty() || tmp<=mxpq.top())
            {
                mxpq.push(tmp);
                if(mxpq.size()-1>mnpq.size())
                {
                    mnpq.push(-mxpq.top());
                    mxpq.pop();
                }
            }
            else
            {
                mnpq.push(-tmp);
                if(mxpq.size()<mnpq.size())
                {
                    mxpq.push(-mnpq.top());
                    mnpq.pop();
                }
            }
            if(i%2==0)
                v.push_back(mxpq.top());
        }
        int size = v.size();
        printf("%d\n", size);
        for(int i=0;i<size;i++)
        {
            if(i!=0 && i%10==0) printf("\n");
            printf("%d ", v[i]);
        }
        printf("\n");
    }

    return 0;
}
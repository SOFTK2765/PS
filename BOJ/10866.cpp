#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    scanf("%d", &n);
    deque<int> a;
    for(int i=0;i<n;i++)
    {
        char order[11];
        scanf(" %s", order);
        if(strcmp(order, "push_front")==0)
        {
            int tmp;
            scanf(" %d", &tmp);
            a.push_front(tmp);
        }
        else if(strcmp(order, "push_back")==0)
        {
            int tmp;
            scanf(" %d", &tmp);
            a.push_back(tmp);
        }
        else if(strcmp(order, "pop_front")==0)
        {
            if(!a.empty())
            {
                printf("%d\n", a.front());
                a.pop_front();
            }
            else printf("%d\n", -1);
        }
        else if(strcmp(order, "pop_back")==0)
        {
            if(!a.empty())
            {
                printf("%d\n", a.back());
                a.pop_back();
            }
            else printf("%d\n", -1);
        }
        else if(strcmp(order, "size")==0) printf("%d\n", a.size());
        else if(strcmp(order, "empty")==0) printf("%d\n", a.empty()?1:0);
        else if(strcmp(order, "front")==0)
        {
            if(!a.empty()) printf("%d\n", a.front());
            else printf("%d\n", -1);
        }
        else if(strcmp(order, "back")==0)
        {
            if(!a.empty()) printf("%d\n", a.back());
            else printf("%d\n", -1);
        }
    }

    return 0;
}
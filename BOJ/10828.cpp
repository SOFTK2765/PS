#include <bits/stdc++.h>

using namespace std;

int main()
{
    stack<int> a;
    int n;
    scanf("%d", &n);
    for(int i=0;i<n;i++)
    {
        char com[10];
        scanf("%s", com);
        if(strcmp(com, "push")==0)
        {
            int x;
            scanf("%d ", &x);
            a.push(x);
        }
        else if(strcmp(com, "pop")==0)
        {
            if(a.empty())
            {
                printf("%d\n", -1);
                continue;
            }
            printf("%d\n", a.top());
            a.pop();
        }
        else if(strcmp(com, "size")==0)
        {
            printf("%d\n", a.size());
        }
        else if(strcmp(com, "empty")==0)
        {
            if(a.empty()) printf("%d\n", 1);
            else printf("%d\n", 0);
        }
        else if(strcmp(com, "top")==0)
        {
            if(a.empty())
            {
                printf("%d\n", -1);
                continue;
            }
            printf("%d\n", a.top());
        }
    }

    return 0;
}
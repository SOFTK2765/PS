#include <bits/stdc++.h>

using namespace std;

int main()
{
    queue<int> a;
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
            printf("%d\n", a.front());
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
        else if(strcmp(com, "front")==0)
        {
            if(a.empty())
            {
                printf("%d\n", -1);
                continue;
            }
            printf("%d\n", a.front());
        }
        else if(strcmp(com, "back")==0)
        {
            if(a.empty())
            {
                printf("%d\n", -1);
                continue;
            }
            printf("%d\n", a.back());
        }
    }

    return 0;
}
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    scanf("%d", &n);
    priority_queue<int> a;
    for(int i=0;i<n;i++)
    {
        int t;
        scanf("%d", &t);
        if(t==0)
        {
            if(a.empty()) printf("%d\n", 0);
            else
            {
                printf("%d\n", a.top());
                a.pop();
            }
            continue;
        }
        a.push(t);
    }

    return 0;
}
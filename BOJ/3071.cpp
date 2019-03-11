#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    scanf("%d", &t);
    queue<char> q;
    for(int i=0;i<t;i++)
    {
        int n;
        scanf(" %d", &n);
        if(n<0)
        {
            printf("-");
            n = -n;
        }
        queue<char> q;
        while(n)
        {
            int tmp = (n%3)-1;
            if(tmp==-1) q.push('-');
            else q.push(tmp+'0');
            n /= 3;
        }
        while(!q.empty())
        {
            printf("%c", q.front());
            q.pop();
        }
        printf("\n");
    }

    return 0;
}
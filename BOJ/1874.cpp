#include <bits/stdc++.h>

using namespace std;

int data[100001];
char res[200001];

int main()
{
    for(int i=0;i<100000;i++)
        data[i] = i+1;
    int n;
    scanf("%d", &n);
    stack<int> stk;
    stk.push(0);
    int nn = 0, dpos = 0, rpos = 0;
    for(int i=0;i<n;i++)
    {
        int tmp;
        scanf(" %d", &tmp);
        if(stk.top()<tmp)
        {
            while(stk.top()!=tmp)
            {
                stk.push(data[dpos++]);
                res[rpos++] = '+';
            }
            stk.pop();
            res[rpos++] = '-';
        }
        else if(stk.top()==tmp)
        {
            stk.pop();
            res[rpos++] = '-';
        }
        else
        {
            printf("NO");
            return 0;
        }
    }
    for(int i=0;i<rpos;i++)
        printf("%c\n", res[i]);

    return 0;
}
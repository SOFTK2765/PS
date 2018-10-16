#include <bits/stdc++.h>

using namespace std;

char a[31];

int main()
{
    scanf("%s", a);
    stack<int> stk;
    int l = strlen(a), sum = 0, top = 0;
    for(int i=0;i<l;i++)
    {
        if(a[i]!='(' && a[i]!=')' && a[i]!='[' && a[i]!=']')
        {
            printf("%d", 0);
            return 0;
        }
        if(a[i]=='(') stk.push(-1);
        if(a[i]=='[') stk.push(-2);
        if(stk.empty() && (a[i]==')' || a[i]==']'))
        {
            printf("%d", 0);
            return 0;
        }
        if(!stk.empty() && ((stk.top()==-1 && a[i]==']') || (stk.top()==-2 && a[i]==')')))
        {
            printf("%d", 0);
            return 0;
        }
        if(!stk.empty() && a[i]==')' && stk.top()!=-2)
        {
            if(stk.top()==-1)
            {
                stk.pop();
                if(!stk.empty() && stk.top()!=-1 && stk.top()!=-2)
                {
                    int tmp = stk.top();
                    if(!stk.empty()) stk.pop();
                    else
                    {
                        printf("%d", 0);
                        return 0;
                    }
                    stk.push(tmp+2);
                }
                else stk.push(2);
            }
            else
            {
                int tmp = stk.top();
                if(!stk.empty()) stk.pop();
                else
                {
                    printf("%d", 0);
                    return 0;
                }
                if(!stk.empty() && stk.top()!=-1)
                {
                    printf("%d", 0);
                    return 0;
                }    
                if(!stk.empty()) stk.pop();
                else
                {
                    printf("%d", 0);
                    return 0;
                }
                if(!stk.empty() && stk.top()!=-1 && stk.top()!=-2)
                {
                    int ttmp = stk.top();
                    if(!stk.empty()) stk.pop();
                    else
                    {
                        printf("%d", 0);
                        return 0;
                    }
                    stk.push(ttmp+tmp*2);
                }
                else stk.push(tmp*2);
            }
        }
        if(!stk.empty() && a[i]==']' && stk.top()!=-1)
        {
            if(stk.top()==-2)
            {
                if(!stk.empty()) stk.pop();
                else
                {
                    printf("%d", 0);
                    return 0;
                }
                if(!stk.empty() && stk.top()!=-1 && stk.top()!=-2)
                {
                    int tmp = stk.top();
                    if(!stk.empty()) stk.pop();
                    else
                    {
                        printf("%d", 0);
                        return 0;
                    }
                    stk.push(tmp+3);
                }
                else stk.push(3);
            }
            else
            {
                int tmp = stk.top();
                if(!stk.empty()) stk.pop();
                else
                {
                    printf("%d", 0);
                    return 0;
                }
                if(!stk.empty() && stk.top()!=-2)
                {
                    printf("%d", 0);
                    return 0;
                }    
                if(!stk.empty()) stk.pop();
                else
                {
                    printf("%d", 0);
                    return 0;
                }
                if(!stk.empty() && stk.top()!=-1 && stk.top()!=-2)
                {
                    int ttmp = stk.top();
                    if(!stk.empty()) stk.pop();
                    else
                    {
                        printf("%d", 0);
                        return 0;
                    }
                    stk.push(ttmp+tmp*3);
                }
                else stk.push(tmp*3);
            }
        }
    }
    if(stk.size()==1 && stk.top()>=0) printf("%d", stk.top());
    else printf("%d", 0);

    return 0;
}
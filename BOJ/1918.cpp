#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    cin >> s;
    int l = s.length();
    stack<char> stk;
    for(int i=0;i<l;i++)
    {
        if(s[i]=='+' || s[i]=='-')
        {
            while(!stk.empty())
            {
                char top = stk.top();
                if(top=='(') break;
                printf("%c", top);
                stk.pop();
            }
            stk.push(s[i]);
        }
        else if(s[i]=='*' || s[i]=='/')
        {
            if(!stk.empty())
            {
                char top = stk.top();
                while(top=='*' || top=='/')
                {
                    printf("%c", top);
                    stk.pop();
                    if(stk.empty()) break;
                    top = stk.top();
                }
            }
            stk.push(s[i]);
        }
        else if(s[i]=='(') stk.push(s[i]);
        else if(s[i]==')')
        {
            while(stk.top()!='(')
            {
                printf("%c", stk.top());
                stk.pop();
            }
            stk.pop();
        }
        else printf("%c", s[i]);
    }
    while(!stk.empty())
    {
        printf("%c", stk.top());
        stk.pop();
    }

    return 0;
}
#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    while(getline(cin, s))
    {
        if(s==".") break;
        int l = s.length();
        stack<char> stk;
        bool flag = false;
        for(int i=0;i<l;i++)
        {
            if(s[i]=='(' || s[i]=='[') stk.push(s[i]);
            else if(s[i]==')')
            {
                if(stk.empty() || stk.top()!='(')
                {
                    printf("no\n");
                    flag = true;
                    break;
                }
                stk.pop();
            }
            else if(s[i]==']')
            {
                if(stk.empty() || stk.top()!='[')
                {
                    printf("no\n");
                    flag = true;
                    break;
                }
                stk.pop();
            }
        }
        if(!flag) printf("%s\n", stk.empty()?"yes":"no");
    }

    return 0;
}
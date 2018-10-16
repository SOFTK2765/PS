#include <bits/stdc++.h>

using namespace std;

char s[101];

stack<int> stk;

int main()
{
    int a, b;
    char tmp;
    scanf("%s", s);
    int l = strlen(s);
    for(int i=0;i<l;i++)
    {
        if('0'<=s[i] && s[i]<='9') stk.push(s[i]-'0');
        else
        {
            b = stk.top();
            stk.pop();
            a = stk.top();
            stk.pop();
            if(s[i]=='+') stk.push(a+b);
            else if(s[i]=='-') stk.push(a-b);
            else if(s[i]=='*') stk.push(a*b);
            else if(s[i]=='/') stk.push(a/b);
        }
    }
    printf("%d", stk.top());

    return 0;
}
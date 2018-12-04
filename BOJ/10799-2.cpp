#include <bits/stdc++.h>

using namespace std;

char a[100001];

int main()
{
    scanf("%s", a);
    int l = strlen(a);
    stack<char> stk;
    int sum = 0;
    bool flag = false;
    for(int i=0;i<l;i++)
    {
        if(a[i]=='(')
        {
            stk.push('(');
            flag = false;
        }
        else
        {
            if(flag)
            {
                sum += 1;
                stk.pop();
                flag = true;
            }
            else
            {
                stk.pop();
                sum += stk.size();
                flag = true;
            } 
        }
    }
    printf("%d", sum);

    return 0;
}
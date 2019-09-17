#include <bits/stdc++.h>

using namespace std;

double a[27];

int main()
{
    int n;
    scanf("%d", &n);
    string s;
    cin >> s;
    for(int i=0;i<n;i++)
        scanf(" %lf", &a[i]);
    int l = s.length();
    stack<double> stk;
    for(int i=0;i<l;i++)
    {
        if(s[i]=='+' || s[i]=='-' || s[i]=='*' || s[i]=='/')
        {
            double tmp1, tmp2 = stk.top();
            stk.pop();
            tmp1 = stk.top();
            stk.pop();
            if(s[i]=='+') stk.push(tmp1+tmp2);
            else if(s[i]=='-') stk.push(tmp1-tmp2);
            else if(s[i]=='*') stk.push(tmp1*tmp2);
            else stk.push(tmp1/tmp2);
        }
        else stk.push(a[s[i]-'A']);
    }
    printf("%.2lf", stk.top());

    return 0;
}
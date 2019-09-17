#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    scanf("%d", &n);
    int cnt = 0;
    for(int i=0;i<n;i++)
    {
        string s;
        cin >> s;
        int l = s.length();
        stack<char> stk;
        for(int j=0;j<l;j++)
            if(stk.empty() || stk.top()!=s[j]) stk.push(s[j]);
            else stk.pop();
        if(stk.empty()) cnt++;
    }
    printf("%d", cnt);

    return 0;
}
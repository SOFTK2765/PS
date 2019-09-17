#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    while(getline(cin, s))
    {
        if(s=="#") break;
        int l = s.length();
        stack<string> stk;
        bool flag = false;
        for(int i=0;i<l;i++)
        {
            if(s[i]=='<')
            {
                string tmp = "";
                while(s[i]!='>') tmp += s[i++];
                tmp += ">";
                int tmpl = tmp.length();
                if(tmp[tmpl-2]=='/') continue;
                for(int j=0;j<tmpl;j++)
                {
                    if(tmp[j]==' ')
                    {
                        tmp = tmp.substr(0, j)+">";
                        break;
                    }
                }
                if(tmp[1]=='/')
                {
                    if(!stk.empty() && stk.top()=="<"+tmp.substr(2, tmpl-2)) stk.pop();
                    else
                    {
                        flag = true;
                        break;
                    }
                }
                else stk.push(tmp);
            }
        }
        if(stk.size()!=0) flag = true;
        printf("%s\n", flag?"illegal":"legal");
    }

    return 0;
}
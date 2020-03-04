#include <bits/stdc++.h>

using namespace std;

int ac[256];
bool check[1000001];

int main()
{
    string str, bomb;
    cin >> str >> bomb;
    int sl = str.length(), bl = bomb.length();
    memset(ac, -1, sizeof(ac));
    for(int i=0;i<bl;i++)
        ac[bomb[i]] = i;
    stack<pair<int, int>> stk;
    for(int i=0;i<sl;i++)
    {
        if(ac[str[i]]!=-1)
        {
            stk.push({ac[str[i]], i});
            if(ac[str[i]]==bl-1)
            {
                vector<int> tmpv;
                int tmp = bl;
                bool tmpflag = false;
                while(!stk.empty() && stk.top().first==tmp-1)
                {
                    tmpv.push_back(stk.top().second);
                    if(stk.top().first==0)
                    {
                        tmpflag = true;
                        break;
                    }
                    stk.pop();
                    tmp--;
                }
                if(tmpflag) stk.pop();
                else
                {
                    int tmpvsize = tmpv.size();
                    for(int j=0;j<tmpvsize;j++)
                        check[tmpv[j]] = true;
                    while(!stk.empty())
                    {
                        check[stk.top().second] = true;
                        stk.pop();
                    }
                }
            }
        }
        else
        {
            check[i] = true;
            while(!stk.empty())
            {
                check[stk.top().second] = true;
                stk.pop();
            }
        }
    }
    while(!stk.empty())
    {
        check[stk.top().second] = true;
        stk.pop();
    }
    bool flag = false;
    for(int i=0;i<sl;i++)
        if(check[i])
        {
            flag = true;
            printf("%c", str[i]);
        }
    if(!flag) printf("FRULA");

    return 0;
}
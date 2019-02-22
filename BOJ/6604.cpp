#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    scanf("%d", &n);
    map<char, pair<int, int>> mp;
    for(int i=0;i<n;i++)
    {
        char tmp1;
        int tmp2, tmp3;
        scanf(" %c %d %d", &tmp1, &tmp2, &tmp3);
        mp[tmp1].first = tmp2;
        mp[tmp1].second = tmp3;
    }
    string s;
    while(cin >> s)
    {
        int l = s.length(), sum = 0;
        stack<pair<char, pair<int, int>>> st;
        bool flag = false;
        for(int i=0;i<l;i++)
        {
            if(s[i]==')')
            {
                int pre = st.top().second.first, tmp = st.top().second.second, end = tmp;
                st.pop();
                if(pre!=st.top().second.second)
                {
                    flag = true;
                    break;
                }
                tmp *= st.top().second.first*st.top().second.second;
                int start = st.top().second.first;
                st.pop();
                st.pop();
                st.push({'+', {start, end}});
                sum += tmp;
            }
            else if(s[i]=='(') st.push({'(', {0, 0}});
            else st.push({s[i], {mp[s[i]].first, mp[s[i]].second}});
        }
        if(flag) printf("error\n");
        else printf("%d\n", sum);
    }

    return 0;
}
#include <bits/stdc++.h>

using namespace std;

bool check[201];

int main()
{
    string s, t;
    cin >> s >> t;
    int sl = s.length(), tl = t.length(), pos = 0;
    vector<int> v;
    for(int i=0;i<sl-tl+1;i++)
    {
        if(s[i]==t[0])
        {
            bool flag = false;
            for(int j=0;j<tl;j++)
                if(s[i+j]!=t[j])
                {
                    flag = true;
                    break;
                }
            if(!flag) v.push_back(i);
        }
    }
    int size = v.size(), mx = max(v[0], sl-tl-v[size-1]);
    for(int i=1;i<size;i++)
        mx = max(mx, v[i]-tl-v[i-1]);
    printf("%d", mx);

    return 0;
}
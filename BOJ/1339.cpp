#include <bits/stdc++.h>

using namespace std;

int n, size, mx;
string s[11];
int l[11];
bool check[27];
bool visit[11];
vector<char> v;
int res[27];

void f(int pos)
{
    if(pos==size)
    {
        int sum = 0;
        for(int i=0;i<n;i++)
        {
            int tmp = 0;
            for(int j=0;j<l[i];j++)
            {
                tmp *= 10;
                tmp += res[s[i][j]-'A'];
            }
            sum += tmp;
        }
        mx = max(mx, sum);
        return;
    }
    for(int i=9;i>=9-size+1;i--)
    {
        if(!visit[i])
        {
            res[v[pos]-'A'] = i;
            visit[i] = true;
            f(pos+1);
            visit[i] = false;
        }
    }
}

int main()
{
    scanf("%d", &n);
    for(int i=0;i<n;i++)
        cin >> s[i];
    for(int i=0;i<n;i++)
    {
        l[i] = s[i].length();
        for(int j=0;j<l[i];j++)
            check[s[i][j]-'A'] = true;
    }
    for(int i=0;i<26;i++)
        if(check[i]) v.push_back(i+'A');
    size = v.size();
    f(0);
    printf("%d", mx);

    return 0;
}
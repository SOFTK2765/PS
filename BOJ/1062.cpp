#include <bits/stdc++.h>

using namespace std;

string a[51];
bool check[26];
bool wordcheck[51][27];
int n, k, mx = 0;

void f(int pos, int ni)
{
    if(pos==k)
    {
        int cnt = 0;
        for(int i=0;i<n;i++)
        {
            if(k>=wordcheck[i][26])
            {
                bool flag = false;
                for(int j=0;j<26;j++)
                {
                    if(wordcheck[i][j] && !check[j])
                    {
                        flag = true;
                        break;
                    }
                }
                if(!flag) cnt++;
            }
        }
        if(mx<cnt) mx = cnt;
        return;
    }
    for(int i=ni+1;i<26;i++)
    {
        if(!check[i])
        {
            check[i] = true;
            f(pos+1, i);
            check[i] = false;
        }
    }
}

int main()
{
    scanf("%d %d", &n, &k);
    for(int i=0;i<n;i++)
    {
        cin >> a[i];
        wordcheck[i]['a'-'a'] = wordcheck[i]['n'-'a'] = wordcheck[i]['t'-'a'] = wordcheck[i]['i'-'a'] = wordcheck[i]['c'-'a'] = true;
        for(string::iterator it=a[i].begin()+4;it<a[i].end()-4;it++)
            wordcheck[i][*it-'a'] = true;
        int cnt = 0;
        for(int j=0;j<26;j++)
            if(wordcheck[i][j]) cnt++;
        wordcheck[i][26] = cnt;
    }
    check['a'-'a'] = check['n'-'a'] = check['t'-'a'] = check['i'-'a'] = check['c'-'a'] = true;
    f(5, 0);
    printf("%d", mx);

    return 0;
}
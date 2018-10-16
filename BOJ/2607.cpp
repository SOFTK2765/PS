#include <bits/stdc++.h>

using namespace std;

int check[27], tcheck[27];

int main()
{
    int n;
    string a;
    cin >> n >> a;
    int al = a.length(), cnt = 0;
    vector<string> v;
    for(int i=0;i<al;i++)
    {
        string tmp = a;
        tmp.erase(tmp.begin()+i);
        v.push_back(tmp);
    }
    for(int i=0;i<al+1;i++)
    {
        for(int j=0;j<26;j++)
        {
            string tmp = "";
            for(int k=0;k<al+1;k++)
            {
                if(k==i) tmp += (char)('A'+j);
                if(k==al) break;
                tmp += a[k];
            }
            v.push_back(tmp);
        }
    }
    for(int i=0;i<al;i++)
    {
        for(int j=0;j<26;j++)
        {
            string tmp = "";
            for(int k=0;k<al;k++)
            {
                if(k==i)
                {
                    tmp += (char)('A'+j);
                    if(k==al) break;
                }
                else tmp += a[k];
            }
            v.push_back(tmp);
        }
    }
    int size = v.size();
    for(int i=0;i<n-1;i++)
    {
        memset(tcheck, 0, sizeof(tcheck));
        string tmp;
        cin >> tmp;
        int tl = tmp.length();
        for(int j=0;j<tl;j++)
            tcheck[tmp[j]-'A']++;
        bool flag = false;
        for(int j=0;j<size;j++)
        {
            memset(check, 0, sizeof(check));
            int vl = v[j].length();
            for(int k=0;k<vl;k++)
                check[v[j][k]-'A']++;
            for(int k=0;k<26;k++)
            {
                if(tcheck[k]!=check[k]) break;
                if(k==25)
                {
                    cnt++;
                    flag = true;
                }
            }
            if(flag) break;
        }
    }
    printf("%d", cnt);

    return 0;
}
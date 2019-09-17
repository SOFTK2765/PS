#include <bits/stdc++.h>

using namespace std;

const pair<int, int> t1[] = {{1, 3}, {3, 2}, {2, 1}};
const pair<int, int> t2[] = {{1, 2}, {2, 3}, {3, 1}};

int pos[21];
string res;

string f(string n)
{
    string res = "";
    int l = n.length(), tmp = 0;
    for(int i=l-1;i>=0;i--)
    {
        int ntmp = (n[i]-'0')*2+tmp;
        tmp = ntmp/10;
        res = (char)((ntmp%10)+'0')+res;
    }
    if(tmp) res = to_string(tmp)+res;
    return res;
}

int main()
{
    int n;
    scanf("%d", &n);
    if(n<=20)
    {
        int size = (int)pow(2, n)-1;
        printf("%d\n", size);
        for(int i=1;i<=size;i++)
        {
            int npos = n, ni = i;
            while(ni%2==0)
            {
                ni /= 2;
                npos--;
            }
            if(npos%2==1) printf("%d %d\n", t1[pos[npos]].first, t1[pos[npos]].second);
            else printf("%d %d\n", t2[pos[npos]].first, t2[pos[npos]].second);
                pos[npos] = (pos[npos]+1)%3;
        }
    }
    else
    {
        string res = "1";
        for(int i=0;i<n;i++)
            res = f(res);
        int l = res.length();
        res[l-1]--;
        cout << res;
    }

    return 0;
}
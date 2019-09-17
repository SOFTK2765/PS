#include <bits/stdc++.h>

using namespace std;

string a[101];
int al[101];
bool check[101][101];
int sl, n;

bool f(int pos)
{
    if(pos==sl) return true;
    for(int i=0;i<n;i++)
        if(check[i][pos] && (pos==0 || !check[i][pos-1]) && f(pos+al[i])) return true;
    return false;
}

int main()
{
    string s;
    cin >> s;
    sl = s.length();
    scanf("%d", &n);
    for(int i=0;i<n;i++)
    {
        cin >> a[i];
        al[i] = a[i].length();
    }
    for(int i=0;i<n;i++)
    {
        int tmp = 0;
        while(1)
        {
            tmp = s.find(a[i], tmp);
            if(tmp==string::npos) break;
            for(int j=tmp;j<tmp+al[i];j++)
                check[i][j] = true;
            tmp += al[i];
        }
    }
    printf("%d", f(0));

    return 0;
}
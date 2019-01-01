#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    scanf("%d", &t);
    while(t--)
    {
        string a, b;
        cin >> a >> b;
        if(b.length()>a.length()) swap(a, b);
        int al = a.length(), bl = b.length(), ol = 0, posa = al-1, posb = bl-1;
        string res = "";
        while(posb>=0)
        {
            int tmpres = a[posa--]-'0'+b[posb--]-'0'+ol;
            res = (char)(tmpres%2+'0')+res;
            ol = tmpres/2;
        }
        while(posa>=0)
        {
            int tmpres = a[posa--]-'0'+ol;
            res = (char)(tmpres%2+'0')+res;
            ol = tmpres/2;
        }
        if(ol==1) res = "1"+res;
        while(res[0]=='0' && res.size()>1) res.erase(0, 1);
        cout << res << endl;
    }
        
    return 0;
}
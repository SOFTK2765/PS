#include <bits/stdc++.h>

using namespace std;

int main()
{
    string a, b;
    cin >> a >> b;
    int cnt = 0;
    if(a[0]=='-') cnt++;
    if(b[0]=='-') cnt++;
    string res = "";
    if(cnt==0 || cnt==2)
    {
        if(cnt==2)
        {
            a.erase(a.begin());
            b.erase(b.begin());
        }
        int al = a.length(), bl = b.length(), posa = al-1, posb = bl-1;
        int up = 0;
        while(posa>=0 && posb>=0)
        {
            res = (char)((a[posa]-'0'+b[posb]-'0'+up)%10+'0')+res;
            if((a[posa--]-'0'+b[posb--]-'0'+up)/10) up = 1;
            else up = 0;
        }
        while(posa>=0)
        {
            res = (char)((a[posa]-'0'+up)%10+'0')+res;
            if((a[posa--]-'0'+up)/10) up = 1;
            else up = 0;
        }
        while(posb>=0)
        {
            res = (char)((b[posb]-'0'+up)%10+'0')+res;
            if((b[posb--]-'0'+up)/10) up = 1;
            else up = 0;
        }
        if(up==1) res = "1"+res;
        if(cnt==2) res = "-"+res;
    }
    else if(cnt==1)
    {
        bool flag = false;
        int m;
        if(a[0]=='-')
        {
            m = 1;
            a.erase(a.begin());
        }
        else
        {
            m = 2;
            b.erase(b.begin());
        }
        if(a.length()<b.length())
        {
            string tmp = a;
            a = b;
            b = tmp;
            if(m==2) m = -1;
            else m = 1;
        }
        else if(a.length()>b.length())
        {
            if(m==1) m = -1;
            else m = 1;
        }
        else
        {
            if(a<b)
            {
                string tmp = a;
                a = b;
                b = tmp;
                if(m==2) m = -1;
                else m = 1;
            }
            else if(a>b)
            {
                if(m==1) m = -1;
                else m = 1;                
            }
            else m = 0;
        }
        int al = a.length(), bl = b.length(), posa = al-1, posb = bl-1;
        int dn = 0;
        while(posa>=0 && posb>=0)
        {
            res = (char)((a[posa]-'0'-b[posb]+'0'-dn+10)%10+'0')+res;
            if((a[posa--]-'0'-b[posb--]+'0'-dn)<0) dn = 1;
            else dn = 0;
        }
        while(posa>=0)
        {
            res = (char)((a[posa]-'0'-dn+10)%10+'0')+res;
            if((a[posa--]-'0'-dn)<0) dn = 1;
            else dn = 0;
        }
        while(posb>=0)
        {
            res = (char)((b[posb]-'0'-dn+10)%10+'0')+res;
            if((b[posb--]-'0'-dn)<0) dn = 1;
            else dn = 0;
        }
        while(res.length()>1)
        {
            if(res[0]!='0') break;
            res.erase(res.begin());
        }
        if(m==-1) res = "-"+res;
    }
    cout << res;

    return 0;
}
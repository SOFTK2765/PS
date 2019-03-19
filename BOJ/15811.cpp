#include <bits/stdc++.h>

using namespace std;

bool alpha[26];
bool check[11];
char selec[11];
int num[26];
int cnt, al, bl, cl;
string a, b, c;
bool flag = false;

void f(int pos)
{
    if(pos==cnt)
    {
        int an = 0;
        for(int i=0;i<al;i++)
        {
            an *= 10;
            an += num[a[i]];
        }
        int bn = 0;
        for(int i=0;i<bl;i++)
        {
            bn *= 10;
            bn += num[b[i]];
        }
        int cn = 0;
        for(int i=0;i<cl;i++)
        {
            cn *= 10;
            cn += num[c[i]];
        }
        if(an+bn==cn) flag = true;
        return;
    }
    for(int i=0;i<10 && !flag;i++)
    {
        if(!check[i])
        {
            check[i] = true;
            num[selec[pos]] = i;
            f(pos+1);
            check[i] = false;
        }
    }
}

int main()
{
    cin >> a >> b >> c;
    al = a.length();
    bl = b.length();
    cl = c.length();
    for(int i=0;i<al;i++)
        alpha[a[i]-'A'] = true;
    for(int i=0;i<bl;i++)
        alpha[b[i]-'A'] = true;
    for(int i=0;i<cl;i++)
        alpha[c[i]-'A'] = true;
    for(int i=0;i<26;i++)
        if(alpha[i]) selec[cnt++] = i+'A';
    f(0);
    printf("%s", flag?"YES":"NO");

    return 0;
}
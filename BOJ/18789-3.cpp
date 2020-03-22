#include <bits/stdc++.h>

using namespace std;

int cnt[10];

int main()
{
    /*for(int i=0;i<8;i++)
        for(int j=0;j<14;j++)
        {
            int tmp;
            scanf("%1d", &tmp);
            cnt[tmp]++;
        }
    for(int i=0;i<10;i++)
        printf("%d : %d\n", i, cnt[i]);*/
    
    ofstream out("test.out", ios::trunc);
    string a;
    while(getline(cin, a))
    {
        string s;
        for(int i=0;i<8;i++)
            getline(cin, s);
        out << a << '\n';
    }
    out.close();

    /*ofstream out("test.out", ios::trunc);
    string a;
    while(getline(cin, a))
    {
        string s;
        for(int i=0;i<8;i++)
            getline(cin, s);
        int size = a.length();
        for(int i=0;i<size;i++)
            out << (a[i]==' '?'\t':a[i]);
        out << '\n';
    }
    out.close();*/

    

    return 0;
}
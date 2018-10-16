#include <bits/stdc++.h>

using namespace std;

char a[101], b[101];

int main()
{
    string a, b;
    cin >> a >> b;
    int al = a.length();
    for(int i=0;i<al;i++)
    {
        if('0'<=a[i] && a[i]<='9')
        {
            a.erase(a.begin()+i);
            al--;
            i--;
        }
    }
    al = a.length();
    int bl = b.length(), res = 0;
    for(int i=0;i<al-bl+1;i++)
    {
        for(int j=0;j<bl;j++)
        {
            if(a[i+j]!=b[j]) break;
            if(j==bl-1) res = 1;
        }
    }
    printf("%d", res);

    return 0;
}
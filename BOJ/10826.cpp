#include <bits/stdc++.h>

using namespace std;

string a[10001];

int main()
{
    int n;
    scanf("%d", &n);
    a[0] = "0";
    a[1] = "1";
    for(int i=2;i<=n;i++)
    {
        int al1 = a[i-1].length(), al2 = a[i-2].length(), pos1 = 0, pos2 = -1, ol = 0;
        while(++pos2<al2)
        {
            int tmpres = a[i-1][pos1++]-'0'+a[i-2][pos2]-'0'+ol;
            ol = tmpres/10;
            a[i].push_back(tmpres%10+'0');
        }
        while(pos1<al1)
        {
            int tmpres = a[i-1][pos1++]-'0'+ol;
            ol = tmpres/10;
            a[i].push_back(tmpres%10+'0');
        }
        if(ol==1) a[i].push_back('1');
    }
    int l = a[n].length();
    for(int i=l-1;i>=0;i--)
        printf("%c", a[n][i]);
    printf("\n");

    return 0;
}
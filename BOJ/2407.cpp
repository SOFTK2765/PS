#include <bits/stdc++.h>

using namespace std;

string a[101][101];

int main()
{
    int n, m;
    scanf("%d %d", &n, &m);
    m = min(m, n-m);
    for(int i=0;i<101;i++)
        for(int j=0;j<101;j++)
            a[i][j] = "0";
    a[0][1] = "1";
    for(int i=1;i<n+1;i++)
        for(int j=1;j<i+2;j++)
        {
            int l1 = a[i-1][j-1].length(), l2 = a[i-1][j].length(), posa = l1-1, posb = l2-1;
            string tmp = "";
            int up = 0;
            while(posa>=0 && posb>=0)
            {
                tmp = (char)((a[i-1][j-1][posa]-'0'+a[i-1][j][posb]-'0'+up)%10+'0')+tmp;
                if((a[i-1][j-1][posa--]-'0'+a[i-1][j][posb--]-'0'+up)/10) up = 1;
                else up = 0;
            }
            while(posa>=0)
            {
                tmp = (char)((a[i-1][j-1][posa]-'0'+up)%10+'0')+tmp;
                if((a[i-1][j-1][posa--]-'0'+up)/10) up = 1;
                else up = 0;
            }
            while(posb>=0)
            {
                tmp = (char)((a[i-1][j][posb]-'0'+up)%10+'0')+tmp;
                if((a[i-1][j][posb--]-'0'+up)/10) up = 1;
                else up = 0;
            }
            if(up==1) tmp = "1"+tmp;
            a[i][j] = tmp;
        }
    cout << a[n][m+1];

    return 0;
}
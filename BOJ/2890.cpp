#include <bits/stdc++.h>

using namespace std;

char a[51][51];
int rankinfo[10];
bool check[51];

int main()
{
    int r, c;
    scanf("%d %d", &r, &c);
    for(int i=0;i<r;i++)
        scanf("%s", a[i]);
    int cnt = 1;
    for(int i=1;i<c-2;i++)
    {
        bool flag = false;
        for(int j=0;j<r;j++)
        {
            if(a[j][c-1-i]!='.' && a[j][c-1-i]!='F' && a[j][c-1-i]!='S' && !check[j])
            {
                rankinfo[a[j][c-1-i]-'0'] = cnt;
                check[j] = true;
                flag = true;
            }
        }
        if(flag) cnt++;
    }
    for(int i=1;i<=9;i++)
        printf("%d\n", rankinfo[i]);

    return 0;
}
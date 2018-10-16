#include <bits/stdc++.h>

using namespace std;

char a[51][51];
char tmp[51];

int main()
{
    int n;
    scanf("%d", &n);
    int cnt = 0;
    for(int i=0;i<n;i++)
    {
        memset(tmp, 0, sizeof(tmp));
        scanf("%s", tmp);
        int l = strlen(tmp);
        bool check = false, flag = false, pass;
        for(int j=0;j<cnt;j++)
        {
            pass = false;
            if(strlen(a[j])!=l) pass = true;
            if(pass) continue;
            for(int k=0;k<l;k++)
            {
                for(int k2=0;k2<l;k2++)
                {
                    if(a[j][k2]!=tmp[(k2+k)%l]) break;
                    if(k2==l-1) check = true;
                }
                if(check) break;
            }
            if(check) break;
        }
        if(cnt==0 || !check)
        {
            strcpy(a[cnt], tmp);
            cnt++;
        }
    }
    printf("%d", cnt);

    return 0;
}
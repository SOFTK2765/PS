#include <bits/stdc++.h>

using namespace std;

char a[121];
int s[121];

int main()
{
    for(memset(a, 0, sizeof(a));~scanf("%s ", a);memset(a, 0, sizeof(a)))
    {
        for(int i=0;i<121;i++)
            s[i] = 0;
        int pos = 0, u = 0, l = strlen(a);
        for(int i=l-1;i>=0;i--)
        {
            int tmp = (a[i]-'0')*(l+1)+u;
            s[pos++] = tmp%10;
            u = tmp/10;
        }
        while(u)
        {
            s[pos++]=u%10;
            u/=10;
        }
        bool flag = false;
        for(int i=0;i<pos;i++)
        {
            if(s[i]!=9)
            {
                flag = true;
                break;
            }
        }
        if(flag) printf("%s is not cyclic\n", a);
        else printf("%s is cyclic\n", a);
    }
    return 0;
}
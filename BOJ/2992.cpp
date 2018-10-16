#include <bits/stdc++.h>

using namespace std;

char a[7];
int cnt[10];
int l, num;
bool flag;

void f(int pos, int nn)
{
    if(pos==l)
    {
        if(num<nn)
        {
            printf("%d", nn);
            flag = true;
        }
        return;
    }
    nn *= 10;
    if(!flag)
    {
        for(int i=0;i<10;i++)
        {
            if(cnt[i])
            {
                nn += i;
                cnt[i]--;
                f(pos+1, nn);
                nn -= i;
                cnt[i]++;
            }
        }
    }
}

int main()
{
    scanf("%s", a);
    l = strlen(a);
    for(int i=0;i<l;i++)
        cnt[a[i]-'0']++;
    for(int i=0;i<l;i++)
    {
        num *= 10;
        num += a[i]-'0';
    }
    f(0, 0);
    if(!flag) printf("%d", 0);

    return 0;
}
#include <bits/stdc++.h>

using namespace std;

bool check[1001];
int tmpcnt1[10], tmpcnt2[10];

int main()
{
    int n;
    scanf("%d", &n);
    for(int i=100;i<1000;i++)
    {
        string tmp = to_string(i);
        if(tmp[1]=='0' || tmp[2]=='0' || tmp[0]==tmp[1] || tmp[1]==tmp[2] || tmp[2]==tmp[0]) continue;
        check[i] = true;
    }
    for(int i=0;i<n;i++)
    {
        int a, b, c;
        scanf(" %d %d %d", &a, &b, &c);
        for(int j=100;j<1000;j++)
        {
            if(check[j])
            {
                memset(tmpcnt1, 0, sizeof(tmpcnt1));
                memset(tmpcnt2, 0, sizeof(tmpcnt2));
                int tmp1 = j, tmp2 = a, cnt1 = 0, cnt2 = 0;
                for(int k=0;k<3;k++)
                {
                    if(tmp1%10==tmp2%10) cnt1++;
                    else
                    {
                        tmpcnt1[tmp1%10]++;
                        tmpcnt2[tmp2%10]++;
                    }
                    tmp1 /= 10;
                    tmp2 /= 10;
                }
                for(int k=0;k<10;k++)
                    cnt2 += min(tmpcnt1[k], tmpcnt2[k]);
                if(cnt1!=b || cnt2!=c) check[j] = false;
            }
        }
    }
    int cnt = 0;
    for(int i=100;i<1000;i++)
        if(check[i]) cnt++;
    printf("%d", cnt);

    return 0;
}
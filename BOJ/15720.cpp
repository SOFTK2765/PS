#include <bits/stdc++.h>

using namespace std;

int ba[1001], ca[1001], da[1001];
int cnt[3];

int main()
{
    int b, c, d;
    scanf("%d %d %d", &b, &c, &d);
    cnt[0] = b;
    cnt[1] = c;
    cnt[2] = d;
    for(int i=0;i<b;i++)
        scanf(" %d", &ba[i]);
    for(int i=0;i<c;i++)
        scanf(" %d", &ca[i]);
    for(int i=0;i<d;i++)
        scanf(" %d", &da[i]);
    sort(ba, ba+b);
    sort(ca, ca+c);
    sort(da, da+d);
    sort(cnt, cnt+3);
    int sum = 0;
    for(int i=b-cnt[0];i<b;i++)
        sum += ba[i];
    for(int i=c-cnt[0];i<c;i++)
        sum += ca[i];
    for(int i=d-cnt[0];i<d;i++)
        sum += da[i];
    int dres = sum*0.9;
    for(int i=0;i<b-cnt[0];i++)
    {
        sum += ba[i];
        dres += ba[i];
    }
    for(int i=0;i<c-cnt[0];i++)
    {
        sum += ca[i];
        dres += ca[i];
    }
    for(int i=0;i<d-cnt[0];i++)
    {
        sum += da[i];
        dres += da[i];
    }
    printf("%d\n%d", sum, dres);

    return 0;
}
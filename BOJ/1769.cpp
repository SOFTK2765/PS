#include <bits/stdc++.h>

using namespace std;

char a[1000001];

int main()
{
    scanf("%s", a);
    int l = strlen(a), sum = 0;
    if(l==1)
    {
        printf("%d\n%s", 0, (a[0]-'0')%3==0?"YES":"NO");
        return 0;
    }
    for(int i=0;i<l;i++)
        sum += (a[i]-'0');
    int tsum, cnt = 1;
    while(sum/10)
    {
        tsum = 0;
        while(sum)
        {
            tsum += sum%10;
            sum /= 10;
        }
        sum = tsum;
        cnt++;
    }
    printf("%d\n%s", cnt, sum%3==0?"YES":"NO");

    return 0;
}
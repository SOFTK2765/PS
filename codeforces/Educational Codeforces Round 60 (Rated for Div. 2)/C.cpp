#include <bits/stdc++.h>

using namespace std;

char a[100001];

int main()
{
    long long x1, y1, x2, y2;
    int n;
    scanf("%lld %lld %lld %lld %d %s", &x1, &y1, &x2, &y2, &n, a);
    long long mnd = 3e18, firstd = abs(x2-x1)+abs(y2-y1);
    long long tnx = x1, tny = y1, cnt = 0, mndi = 0;
    bool infflag = false;
    long long tmp, rescnt = 0;
    for(int i=0;i<n;i++)
    {
        if(a[i]=='U') tny++;
        else if(a[i]=='D') tny--;
        else if(a[i]=='L') tnx--;
        else if(a[i]=='R') tnx++;
        tmp = abs(tny-y2)+abs(tnx-x2);
        cnt++;
        if(tmp<=cnt)
        {
            printf("%lld", cnt);
            return 0;
        }
        if(mnd>tmp-cnt)
        {
            mnd = tmp-cnt;
            mndi = i;
        }
    }
    if(firstd<=tmp-cnt) infflag = true;
    else
    {
        rescnt += (1LL*mnd/(firstd-(tmp-cnt))+1)*n;
        long long nx = x1+(tnx-x1)*(mnd/(firstd-(tmp-cnt))+1), ny = y1+(tny-y1)*(mnd/(firstd-(tmp-cnt))+1), ttmp;
        for(int i=0;i<n;i++)
        {
            if(a[i]=='U') ny++;
            else if(a[i]=='D') ny--;
            else if(a[i]=='L') nx--;
            else if(a[i]=='R') nx++;
            ttmp = abs(ny-y2)+abs(nx-x2);
            rescnt++;
            if(ttmp<=rescnt) break;
        }
    }
    printf("%d", infflag?-1:rescnt);

    return 0;
}
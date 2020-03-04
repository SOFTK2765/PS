#include <bits/stdc++.h>

using namespace std;

class Point
{
public:
    long long x, y, rx = 1, ry = 0;
    bool operator <(const Point &p1) const
    {
        if(rx*p1.ry != p1.rx*ry) return p1.rx*ry<rx*p1.ry;
        if(y!=p1.y) return y<p1.y;
        return x<p1.x;
    }
    bool operator >(const Point &p1) const
    {
        if(rx*p1.ry != p1.rx*ry) return p1.rx*ry>rx*p1.ry;
        if(y!=p1.y) return y>p1.y;
        return x>p1.x;
    }
    bool operator <=(const Point &p1) const
    {
        if(rx*p1.ry != p1.rx*ry) return p1.rx*ry<=rx*p1.ry;
        if(y!=p1.y) return y<=p1.y;
        return x<=p1.x;
    }
};

int ccw(Point p1, Point p2, Point p3){return p1.x*p2.y+p2.x*p3.y+p3.x*p1.y-p1.y*p2.x-p2.y*p3.x-p3.y*p1.x;}

Point a[101], b[101];

int main()
{
    int t;
    scanf("%d", &t);
    while(t--)
    {
        int n, m;
        scanf(" %d %d", &n, &m);
        for(int i=0;i<n;i++)
            scanf(" %d %d", &a[i].x, &a[i].y);
        for(int i=0;i<m;i++)
            scanf(" %d %d", &b[i].x, &b[i].y);
        if((n==1 && m==1) || (n==0 || m==0))
        {
            printf("YES\n");
            continue;
        }
        sort(a, a+n);
        sort(b, b+m);
        for(int i=0;i<n;i++)
        {
            a[i].rx = a[i].x-a[0].x;
            a[i].ry = a[i].y-a[0].y;
        }
        for(int i=0;i<m;i++)
        {
            b[i].rx = b[i].x-b[0].x;
            b[i].ry = b[i].y-b[0].y;
        }
        stack<int> stka, stkb;
        if(n>=3)
        {
            sort(a+1, a+n);
            stka.push(0);
            stka.push(1);
            for(int i=2;i<n;i++)
            {
                int size = stka.size();
                while(size>=2)
                {
                    int tmp1 = stka.top(), tmp2;
                    stka.pop();
                    tmp2 = stka.top();
                    if(ccw(a[tmp2], a[tmp1], a[i])>0)
                    {
                        stka.push(tmp1);
                        break;
                    }
                    size = stka.size();
                }
                stka.push(i);
            }
        }
        else
        {
            for(int i=0;i<n;i++)
                stka.push(i);
        }
        if(m>=3)
        {
            sort(b+1, b+m);
            stkb.push(0);
            stkb.push(1);
            for(int i=2;i<m;i++)
            {
                int size = stkb.size();
                while(size>=2)
                {
                    int tmp1 = stkb.top(), tmp2;
                    stkb.pop();
                    tmp2 = stkb.top();
                    if(ccw(b[tmp2], b[tmp1], b[i])>0)
                    {
                        stkb.push(tmp1);
                        break;
                    }
                    size = stkb.size();
                }
                stkb.push(i);
            }
        }
        else
        {
            for(int i=0;i<m;i++)
                stkb.push(i);
        }
        vector<Point> cha, chb;
        while(!stka.empty())
        {
            cha.push_back(a[stka.top()]);
            stka.pop();
        }
        while(!stkb.empty())
        {
            chb.push_back(b[stkb.top()]);
            stkb.pop();
        }
        int sizea = cha.size(), sizeb = chb.size();
        bool flag = false;
        for(int i=0;i<sizea;i++)
        {
            for(int j=0;j<sizeb;j++)
            {
                Point p1 = cha[i], p2 = cha[(i+1)%sizea], p3 = chb[i], p4 = chb[(i+1)%sizeb];
                long long ccwres1 = 1LL*ccw(p1, p2, p3)*ccw(p1, p2, p4), ccwres2 = 1LL*ccw(p3, p4, p1)*ccw(p3, p4, p2);
                if(ccwres1==0 && ccwres2==0)
                {
                    if(p1>p2) swap(p1, p2);
                    if(p3>p4) swap(p3, p4);
                    if(p1<=p4 && p3<=p2) flag = true;
                }
                else if(ccwres1<=0 && ccwres2<=0) flag = true;
                if(flag) break;
            }
            if(flag) break;
        }
        if(flag)
        {
            printf("NO\n");
            continue;
        }
        for(int i=0;i<sizeb;i++)
        {
            int ccwstd = ccw(cha[sizea-1], cha[0], chb[i]);
            if(ccwstd==0)
            {
                if((cha[sizea-1].x-chb[i].x)*(cha[0].x-chb[i].x)<=0 && (cha[sizea-1].y-chb[i].y)*(cha[0].y-chb[i].y)<=0)
                {
                    flag = true;
                    break;
                }
                else break;
            }
            bool tmpflag = false;
            for(int j=0;j<sizea;j++)
            {
                if(1LL*ccwstd*ccw(cha[j], cha[(j+1)%sizea], chb[i])<0)
                {
                    tmpflag = true;
                    break;
                }
                if(j==sizea-1) flag = true;
            }
            if(flag || tmpflag) break;
        }
        if(flag)
        {
            printf("NO\n");
            continue;
        }
        for(int i=0;i<sizea;i++)
        {
            int ccwstd = ccw(chb[sizeb-1], chb[0], cha[i]);
            if(ccwstd==0)
            {
                if((chb[sizeb-1].x-cha[i].x)*(chb[0].x-cha[i].x)<=0 && (chb[sizeb-1].y-cha[i].y)*(chb[0].y-cha[i].y)<=0)
                {
                    flag = true;
                    break;
                }
                else break;
            }
            bool tmpflag = false;
            for(int j=0;j<sizeb;j++)
            {
                if(1LL*ccwstd*ccw(chb[j], chb[(j+1)%sizeb], cha[i])<0)
                {
                    tmpflag = true;
                    break;
                }
                if(j==sizeb-1) flag = true;
            }
            if(flag || tmpflag) break;
        }
        if(flag)
        {
            printf("NO\n");
            continue;
        }
        printf("YES\n");
    }

    return 0;
}
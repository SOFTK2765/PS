#include <bits/stdc++.h>

using namespace std;

const int dd[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

int ddd[12] = {};

int main()
{
    ddd[0] = dd[0];
    for(int i=0;i<11;i++)
        ddd[i+1] = ddd[i]+dd[i+1];
    int t;
    scanf("%d", &t);
    while(t--)
    {
        int m, d, y, m2, d2;
        char a1, a2, a3;
        scanf(" %d%c%d%c%d %d%c%d", &m, &a1, &d, &a2, &y, &m2, &a3, &d2);
        int n1 = ddd[m-1]+d;
        int n2 = ddd[m2-1]+d2;
        if(n1>n2 && n1-n2<7) n1-n2==1?printf("%d%c%d%c%d IS %d DAY PRIOR\n", m2, a1, d2, a2, y, n1-n2):printf("%d%c%d%c%d IS %d DAYS PRIOR\n", m2, a1, d2, a2, y, n1-n2);
        if(n1<n2 && n2-n1<7) n2-n1==1?printf("%d%c%d%c%d IS %d DAY AFTER\n", m2, a1, d2, a2, y, n2-n1):printf("%d%c%d%c%d IS %d DAYS AFTER\n", m2, a1, d2, a2, y, n2-n1);
        if(n1==n2) printf("SAME DAY\n");
        if(abs(n1-n2)>=7) printf("OUT OF RANGE\n");
    }

    return 0;
}
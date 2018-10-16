#include <bits/stdc++.h>

using namespace std;

struct info
{
    int a, b;
};

info p[51];

int main()
{
    int n;
    scanf("%d", &n);
    for(int i=0;i<n;i++)
        scanf(" %d %d", &p[i].a, &p[i].b);
    for(int i=0;i<n;i++)
    {
        int cnt = 1;
        for(int j=0;j<n;j++)
        {
            if(i==j) continue;
            if(p[i].a<p[j].a && p[i].b<p[j].b) cnt++;
        }
        printf("%d ", cnt);
    }

    return 0;
}
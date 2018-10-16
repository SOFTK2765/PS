#include <bits/stdc++.h>

using namespace std;

struct info
{
    int a, b, c;
    bool check = false;
};

info data[100001];
bool visit[10001];

bool cmp(const data &d1, data &d2)
{
    if(d1.a!=d2.a) return d1.a<d2.a;
    else if(d1.b!=d2.b) return d1.b<d2.b;
    else return d1.c<d2.c;
}

int main()
{
    int n, m;
    scanf("%d %d", &n, &m);
    for(int i=0;i<m;i++)
        scanf(" %d %d %d", &data[i].a, &data[i].b, &data[i].c);
    int land1, land2;
    scanf(" %d %d", &land1, &land2);
    sort(data, data+m, cmp);
    queue<int> bfs;
    for(int i=0;i<m;i++)
    {
        if(data[i].a==land1) bfs.push(i);
        if(data[i].a>land1) break;
    }
    int min = 1000000000;
    while(!bfs.empty())
    {
        int size = bfs.size();
        while(size--)
        {
            int tmp = bfs.front();
            bfs.pop();


        }
    }

    return 0;
}
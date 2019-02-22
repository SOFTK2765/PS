#include <bits/stdc++.h>

using namespace std;

pair<int, int> a[30001];
bool visit[30001];

bool cmp(const pair<int, int> &a, const pair<int, int> &b){return a.first<=b.first;}

int main()
{
    int n;
    scanf("%d", &n);
    for(int i=0;i<n-1;i++)
        scanf(" %d", &a[i].first);
    int t;
    scanf(" %d", &t);
    for(int i=0;i<n-1;i++)
        scanf(" %d", &a[i].second);
    sort(a, a+n-1, cmp);
    queue<int> bfs;
    bfs.push(0);
    while(!bfs.empty())
    {
        int size = bfs.size();
        while(size--)
        {
            int npos = bfs.front();
            bfs.pop();
            if(a[npos].first+a[npos].second>=t)
            {
                printf("권병장님, 중대장님이 찾으십니다");
                return 0;
            }
            for(int i=npos+1;i<n-1;i++)
            {
                if(a[npos].first+a[npos].second<a[i].first) break;
                if(visit[i]) continue;
                visit[i] = true;
                bfs.push(i);
            }
        }
    }
    printf("엄마 나 전역 늦어질 것 같아");

    return 0;
}
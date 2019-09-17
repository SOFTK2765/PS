#include <bits/stdc++.h>

using namespace std;

pair<pair<int, int>, pair<int, int>> N[1001];

bool cmp1(pair<pair<int, int>, pair<int, int>> a, pair<pair<int, int>, pair<int, int>> b){return a.second.second > b.second.second;}
bool cmp2(pair<pair<int, int>, pair<int, int>> a, pair<pair<int, int>, pair<int, int>> b){return a.second.first > b.second.first;}
bool cmp3(pair<pair<int, int>, pair<int, int>> a, pair<pair<int, int>, pair<int, int>> b){return a.first.second > b.first.second;}

int main()
{
    int n, m, s1, s2, s3, cnt=1;
    scanf("%d %d\n",&n,&m);
    for(int i=0;i<n;i++) scanf("%d %d %d %d\n",&N[i].first.first,&N[i].first.second,&N[i].second.first,&N[i].second.second);
    std::stable_sort(N,N+n,cmp1);
    std::stable_sort(N,N+n,cmp2);
    std::stable_sort(N,N+n,cmp3);
    int rnk = cnt;
    if(N[0].first.first==m)
    {
        printf("1");
        return 0;
    }
    for(int i=1;i<n;i++)
    {
        cnt++;
        cout << cnt << " " << rnk << endl;
        if(!(N[i].first.first==N[i-1].first.first && N[i].second.first==N[i-1].second.first && N[i].second.second==N[i-1].second.second)) rnk = cnt;
        if(N[i].first.first==m) printf("%d", rnk);
    }

    return 0;
}
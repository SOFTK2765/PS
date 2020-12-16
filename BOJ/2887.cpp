#include <bits/stdc++.h>

using namespace std;

tuple<int, int, int, int> a[100001], b[100001], c[100001];

bool cmp1(const tuple<int, int, int, int> a, const tuple<int, int, int, int> b){return get<1>(a)<get<1>(b);}
bool cmp2(const tuple<int, int, int, int> a, const tuple<int, int, int, int> b){return get<2>(a)<get<2>(b);}

class DisjointSet
{
public:
    vector<int> parent, rank;
    DisjointSet(int n) : parent(n), rank(n, 1)
    {
        for(int i=0;i<n;i++)
            parent[i] = i;
    }
    int find(int u)
    {
        if(u==parent[u]) return u;
        return parent[u] = find(parent[u]);
    }
    void merge(int u, int v)
    {
        u = find(u);
        v = find(v);
        if(u==v) return;
        if(rank[u]>rank[v]) swap(u, v);
        parent[u] = v;
        if(rank[u]==rank[v]) rank[v]++;
    }
};

int main()
{
	int n;
	scanf("%d", &n);
	for(int i=0;i<n;i++)
    {
		scanf(" %d %d %d", &get<0>(a[i]), &get<1>(a[i]), &get<2>(a[i]));
        get<0>(c[i]) = get<0>(b[i]) = get<0>(a[i]);
        get<1>(c[i]) = get<1>(b[i]) = get<1>(a[i]);
        get<2>(c[i]) = get<2>(b[i]) = get<2>(a[i]);
        get<3>(c[i]) = get<3>(b[i]) = get<3>(a[i]) = i;
    }
    sort(a, a+n);
    sort(b, b+n, cmp1);
    sort(c, c+n, cmp2);
    priority_queue<tuple<int, int, int>> pq;
    for(int i=0;i<n-1;i++)
        pq.push({get<0>(a[i])-get<0>(a[i+1]), get<3>(a[i+1]), get<3>(a[i])});
    for(int i=0;i<n-1;i++)
        pq.push({get<1>(b[i])-get<1>(b[i+1]), get<3>(b[i+1]), get<3>(b[i])});
    for(int i=0;i<n-1;i++)
        pq.push({get<2>(c[i])-get<2>(c[i+1]), get<3>(c[i+1]), get<3>(c[i])});
	DisjointSet ds(n+1);
    long long sum = 0;
    while(!pq.empty())
    {
        tuple<int, int, int> tmp = pq.top();
        pq.pop();
        if(ds.find(get<1>(tmp))!=ds.find(get<2>(tmp)))
        {
            sum += -get<0>(tmp);
            ds.merge(ds.find(get<1>(tmp)), ds.find(get<2>(tmp)));
        }
    }
    printf("%lld", sum);

	return 0;
}
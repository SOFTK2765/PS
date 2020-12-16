#include <bits/stdc++.h>

using namespace std;

tuple<int, int, int> a[1001];

double dist(double x1, double y1, double x2, double y2){return sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));}

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
	int t;
	scanf("%d", &t);
	while(t--)
	{
		int w, n;
		scanf(" %d %d", &w, &n);
		if(n==0)
		{
			printf("%.8lf\n", w/2.0);
			continue;
		}
		for(int i=0;i<n;i++)
			scanf(" %d %d %d", &get<0>(a[i]), &get<1>(a[i]), &get<2>(a[i]));
		priority_queue<tuple<double, int, int>> pq;
		for(int i=0;i<n;i++)
		{
			for(int j=i+1;j<n;j++)
			{
				double d = dist(get<0>(a[i]), get<1>(a[i]), get<0>(a[j]), get<1>(a[j]))-(get<2>(a[i])+get<2>(a[j]));
				pq.push({-d, i, j});
			}
			pq.push({-(get<0>(a[i])-get<2>(a[i])), i, n});
			pq.push({-(w-get<0>(a[i])-get<2>(a[i])), i, n+1});
		}
		DisjointSet ds(n+2);
	    while(!pq.empty())
	    {
	        tuple<double, int, int> tmp = pq.top();
	        pq.pop();
	        if(ds.find(get<1>(tmp))!=ds.find(get<2>(tmp))) ds.merge(ds.find(get<1>(tmp)), ds.find(get<2>(tmp)));
	        if(ds.find(n)==ds.find(n+1))
	        {
	        	printf("%.8lf\n", -get<0>(tmp)<0?0:-get<0>(tmp)/2);
	        	break;
	        }
	    }
	}

	return 0;
}
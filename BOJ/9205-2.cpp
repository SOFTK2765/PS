#include <bits/stdc++.h>

#define INF 987654321

using namespace std;

pair<int, int> a[103];
int dist[103][103];

int main()
{
    int t;
    scanf("%d", &t);
    for(int tc=0;tc<t;tc++)
    {
        int n;
        scanf(" %d", &n);
        for(int i=0;i<n+2;i++)
            scanf(" %d %d", &a[i].first, &a[i].second);
        for(int i=0;i<n+2;i++)
        	for(int j=0;j<n+2;j++)
        		if(i!=j) dist[i][j] = INF;
        for(int i=0;i<n+2;i++)
        	for(int j=0;j<n+2;j++)
        		if(abs(a[i].first-a[j].first)+abs(a[i].second-a[j].second)<=1000) dist[i][j] = dist[j][i] = 1;
        for(int i=0;i<n+2;i++)
        	for(int j=0;j<n+2;j++)
        		for(int k=0;k<n+2;k++)
        			dist[j][k] = min(dist[j][k], dist[j][i]+dist[i][k]);
        printf("%s", dist[0][n+1]!=INF?"happy\n":"sad\n");
    }

    return 0;
}
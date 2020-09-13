#include <bits/stdc++.h>

#define INF 1987654321

using namespace std;

double cost[101][101], cost_dc[101][101];

int main()
{
	int n, r;
	scanf("%d %d", &n, &r);
	for(int i=0;i<n;i++)
		for(int j=0;j<n;j++)
			if(i!=j) cost[i][j] = cost_dc[i][j] = INF;
	map<string, int> mp;
	int cnt = 0;
	for(int i=0;i<n;i++)
	{
		string tmp;
		cin >> tmp;
		mp[tmp] = cnt++;
	}
	int m;
	scanf(" %d", &m);
	vector<string> city;
	for(int i=0;i<m;i++)
	{
		string tmp;
		cin >> tmp;
		city.push_back(tmp);
	}
	int k;
	scanf(" %d", &k);
	for(int i=0;i<k;i++)
	{
		string tmp1, tmp2, tmp3;
		double tmp4;
		cin >> tmp1 >> tmp2 >> tmp3 >> tmp4;
		cost[mp[tmp2]][mp[tmp3]] = cost[mp[tmp3]][mp[tmp2]] = min<double>(tmp4, cost[mp[tmp2]][mp[tmp3]]);
		if(tmp1=="Mugunghwa" || tmp1=="ITX-Saemaeul" || tmp1=="ITX-Cheongchun") cost_dc[mp[tmp2]][mp[tmp3]] = cost_dc[mp[tmp3]][mp[tmp2]] = 0;
		else if(tmp1=="S-Train" || tmp1=="V-Train") cost_dc[mp[tmp2]][mp[tmp3]] = cost_dc[mp[tmp3]][mp[tmp2]] = min<double>(tmp4/2, cost_dc[mp[tmp2]][mp[tmp3]]);
		else cost_dc[mp[tmp2]][mp[tmp3]] = cost_dc[mp[tmp3]][mp[tmp2]] = min<double>(tmp4, cost_dc[mp[tmp2]][mp[tmp3]]);
	}
	for(int i=0;i<n;i++)
		for(int j=0;j<n;j++)
			for(int k=0;k<n;k++)
			{
				cost[j][k] = min(cost[j][k], cost[j][i]+cost[i][k]);
				cost_dc[j][k] = min(cost_dc[j][k], cost_dc[j][i]+cost_dc[i][k]);
			}
	double res = 0, res_dc = 0;
	int citysize = city.size();
	for(int i=0;i<citysize-1;i++)
	{
		int here = mp[city[i]], there = mp[city[i+1]];
		res += cost[here][there];
		res_dc += cost_dc[here][there];
	}
	cout << (res_dc+r<res?"Yes":"No");

	return 0;
}
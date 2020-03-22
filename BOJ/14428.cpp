#include <bits/stdc++.h>

#define MAXN 100000

using namespace std;

pair<int, int> t[2*MAXN];

int n, m;

void build()
{
	for(int i=n-1;i>0;i--)
		t[i] = (t[i*2].first<=t[i*2+1].first?t[i*2]:t[i*2+1]);
}

void update(int pos, int val)
{
	for(t[pos += n].first=val;pos>1;pos /= 2)
		if(t[pos].first<t[pos^1].first) t[pos/2] = t[pos];
		else if(t[pos].first>t[pos^1].first) t[pos/2] = t[pos^1];
		else t[pos/2] = {t[pos].first, min(t[pos].second, t[pos^1].second)};
}

int query(int l, int r)
{
	pair<int, int> ans = t[l+n];
	for(l += n, r += n;l<r;l /= 2, r /= 2)
	{
		if(l&1)
		{
			if(ans.first>t[l].first) ans = t[l];
			else if(ans.first==t[l].first) ans = {ans.first, min(ans.second, t[l].second)};
			l++;
		}
		if(r&1)
		{
			r--;
			if(ans.first>t[r].first) ans = t[r];
			else if(ans.first==t[r].first) ans = {ans.first, min(ans.second, t[r].second)};
		}
	}
	return ans.second;
}

int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	cin >> n;
	for(int i=0;i<n;i++)
	{
		cin >> t[i+n].first;
		t[i+n].second = i+1;
	}
	build();
	cin >> m;
	for(int i=0;i<m;i++)
	{
		int a, b, c;
		cin >> a >> b >> c;
		if(a==1) update(b-1, c);
		else cout << query(b-1, c) << '\n';
	}

	return 0;
}
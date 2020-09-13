#include <bits/stdc++.h>

using namespace std;

const int dx[] = {1, -1, 0, 0};
const int dy[] = {0, 0, 1, -1};

int a[6][6];
set<int> st;

void dfs(int x, int y, int pos, int n)
{
	if(pos==6)
	{
		if(st.find(n)==st.end()) st.insert(n);
		return;
	}
	for(int i=0;i<4;i++)
	{
		int nx = x+dx[i], ny = y+dy[i];
		if(nx<0 || nx>=5 || ny<0 || ny>=5) continue;
		dfs(nx, ny, pos+1, n*10+a[ny][nx]);
	}
}

int main()
{
	for(int i=0;i<5;i++)
		for(int j=0;j<5;j++)
			scanf(" %d", &a[i][j]);
	for(int i=0;i<5;i++)
		for(int j=0;j<5;j++)
			dfs(i, j, 0, 0);
	printf("%d", st.size());

	return 0;
}
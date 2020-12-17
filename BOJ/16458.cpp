#include <bits/stdc++.h>

using namespace std;

const int dx[] = {0, 1, 1, 1, 0, -1, -1, -1};
const int dy[] = {-1, -1, 0, 1, 1, 1, 0, -1};

int num[10][15] = {{1, 1, 1, 1, 0, 1, 1, 0, 1, 1, 0, 1, 1, 1, 1},
{1, 1, 0, 0, 1, 0, 0, 1, 0, 0, 1, 0, 1, 1, 1},
{1, 1, 0, 0, 0, 1, 0, 1, 0, 1, 0, 0, 1, 1, 1},
{1, 1, 1, 0, 0, 1, 0, 1, 1, 0, 0, 1, 1, 1, 1},
{0, 0, 1, 0, 1, 1, 1, 0, 1, 1, 1, 1, 0, 0, 1},
{1, 1, 1, 1, 0, 0, 1, 1, 0, 0, 0, 1, 1, 1, 1},
{1, 0, 0, 1, 0, 0, 1, 1, 1, 1, 0, 1, 1, 1, 1},
{1, 1, 1, 0, 0, 1, 0, 1, 0, 1, 0, 0, 1, 0, 0},
{1, 1, 1, 1, 0, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1},
{1, 1, 1, 1, 0, 1, 1, 1, 1, 0, 0, 1, 0, 0, 1}
};

string a[1001];
bool check[1001][1001];

int main()
{
	int n, m;
	scanf("%d %d", &n, &m);
	getchar();
	for(int i=0;i<n;i++)
		getline(cin, a[i]);
	queue<pair<int, int>> bfs;
	int mxsize = 0, res;
	for(int i=0;i<n;i++)
		for(int j=0;j<m;j++)
			if(a[i][j]=='*' && !check[i][j])
			{
				int mnx = j, mxy = 0;
				bfs.push({j, i});
				check[i][j] = true;
				while(!bfs.empty())
				{
					int size = bfs.size();
					while(size--)
					{
						int x = bfs.front().first, y = bfs.front().second;
						mnx = min(mnx, x);
						mxy = max(mxy, y);
						bfs.pop();
						for(int k=0;k<8;k++)
						{
							int nx = x+dx[k], ny = y+dy[k];
							if(nx<0 || nx>=m || ny<0 || ny>=n || a[ny][nx]!='*' || check[ny][nx]) continue;
							bfs.push({nx, ny});
							check[ny][nx] = true;
						}
					}
				}
				int level = (mxy-i+1)/5, number;
				if(mxsize<level)
				{
					for(number=0;number<10;number++)
					{
						bool flag = false;
						for(int ii=0;ii<5;ii++)
						{
							for(int jj=0;jj<3;jj++)
							{
								if(a[i+ii*level][mnx+jj*level]!=(num[number][ii*3+jj]?'*':' '))
								{
									flag = true;
									break;
								}
							}
							if(flag) break;
						}
						if(!flag) break;
					}
					mxsize = level;
					res = number;
				}
			}
	printf("%d\n", res);

	return 0;
}
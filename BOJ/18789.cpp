#include <bits/stdc++.h>

#define tr 1000

using namespace std;

const int dx[] = {-1, 0, 1, -1, 1, -1, 0, 1};
const int dy[] = {-1, -1, -1, 0, 0, 1, 1, 1};

char a[8][14];
bool scr[8141];
bool check[8][14];

string ns;
int l;
bool flag;

void dfs(int x, int y, int pos)
{
	if(pos==l)
	{
		flag = true;
		return;
	}
	for(int i=0;i<8;i++)
	{
		int nx = x+dx[i], ny = y+dy[i];
		if(nx<0 || nx>=14 || ny<0 || ny>=14) continue;
		if(ns[pos]!=a[ny][nx])
		{
			if(!check[ny][nx]) a[ny][nx] = ns[pos];
			else continue;
		}
		dfs(nx, ny, pos+1);
		if(flag)
		{
			check[ny][nx] = true;
			return;
		}
	}
}

int main()
{
	int cnt = tr, mx_res_dna_point = 0, mx_res_score;
	cin >> mx_res_score;
	for(int i=0;i<8;i++)
		cin >> a[i];
	while(1)
	{
		memset(scr, 0, sizeof(scr));
		memset(check, 0, sizeof(check));
		for(int n=1;n<=8140;n++)
		{
			ns = to_string(n);
			l = ns.length();
			for(int i=0;i<8;i++)
			{
				for(int j=0;j<14;j++)
				{
					flag = false; // false : not found, true : found
					if(a[i][j]==ns[0])
					{
						dfs(j, i, 1);
						if(flag) break;
					}
				}
				if(flag) break;
			}
			if(flag) scr[n] = 1;
		}
		int res_dna_point = 0, res_score = 0;
		bool sflag = false;
		for(int i=1;i<=8140;i++)
		{
			if(scr[i]) res_dna_point++;
			else if(!sflag)
			{
				res_score = i-1;
				sflag = true;
			}
		}
		if(mx_res_score<res_score)
		{
			mx_res_score = res_score;
			cout << "cnt : " << tr-cnt << " " << res_dna_point << " " << res_score << '\n';
			for(int i=0;i<8;i++)
			{
				for(int j=0;j<14;j++)
					cout << a[i][j];
				cout << '\n';
				break;
			}
		}
	}

	//for(int i=0;i<8;i++)
	//cout << s.substr(i*14, 14) << endl;

	return 0;
}
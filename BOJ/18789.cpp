#include <bits/stdc++.h>

#define tr 1000

using namespace std;

const int dx[] = {-1, 0, 1, -1, 1, -1, 0, 1};
const int dy[] = {-1, -1, -1, 0, 0, 1, 1, 1};

char a[8][14];
bool scr[8141];
int check[8][14], tmpcheck[8][14];
char prea[8][14];

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
		if(nx<0 || nx>=14 || ny<0 || ny>=14 || ns[pos]!=a[ny][nx]) continue;
		dfs(nx, ny, pos+1);
		if(flag)
		{
			check[ny][nx]++;
			return;
		}
	}
}

void dfs2(int x, int y, int pos)
{
	if(pos==l)
	{
		flag = true;
		return;
	}
	for(int i=0;i<8;i++)
	{
		int nx = x+dx[i], ny = y+dy[i];
		if(nx<0 || nx>=14 || ny<0 || ny>=14 || ns[pos]!=a[ny][nx]) continue;
		dfs2(nx, ny, pos+1);
		if(flag) return;
	}
}

int main()
{
	int cnt = 5, mx_res_dna_point = 0, mx_res_score, mx_ans = 0, del_pos = 0;
	cin >> mx_res_score;
	for(int i=0;i<8;i++)
		cin >> a[i];
	while(cnt)
	{
		while(1)
		{
			for(int i=0;i<8;i++)
				for(int j=0;j<14;j++)
					prea[i][j] = a[i][j];
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
			int res_dna_point = 0, res_score = 0, checksum = 0;
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
			vector<pair<int, pair<int, int>>> v;
			for(int i=0;i<8;i++)
				for(int j=0;j<14;j++)
					v.push_back({check[i][j], {i, j}});
			sort(v.begin(), v.end());

			int mxtmpres = 0, mxtmpres_i = 0, mxtmpres_j = 0, mxtmpres_k = 0;
			for(int vi=0;vi<112;vi++)
			{
				int i = v[vi].second.first, j = v[vi].second.second;
				char tmpsave = a[i][j];
				for(int k=0;k<10;k++)
				{
					a[i][j] = '0'+k;
					int tmpres = 0;
					memset(tmpcheck, 0, sizeof(tmpcheck));
					for(int n=1;n<=8140;n++)
					{
						ns = to_string(n);
						l = ns.length();
						for(int i2=0;i2<8;i2++)
						{
							for(int j2=0;j2<14;j2++)
							{
								flag = false; // false : not found, true : found
								if(a[i2][j2]==ns[0])
								{
									dfs2(j2, i2, 1);
									if(flag) break;
								}
							}
							if(flag) break;
						}
						if(!flag)
						{
							tmpres = n-1;
							break;
						}
					}
					if(tmpres>mxtmpres)
					{
						mxtmpres = tmpres;
						mxtmpres_i = i;
						mxtmpres_j = j;
						mxtmpres_k = k;
					}
				}
				a[i][j] = tmpsave;
				if(mxtmpres>mx_res_score) break;
			}
			a[mxtmpres_i][mxtmpres_j] = '0'+mxtmpres_k;
			if(mx_res_score==mxtmpres)
			{
				bool exitflag = false;
				for(int i=0;i<8;i++)
					for(int j=0;j<14;j++)
						if(prea[i][j]!=a[i][j]) flag = true;
				if(!flag) break;
			}
			mx_res_score = mxtmpres;
		}
		if(mx_ans<=mx_res_score)
		{
			cnt--;
			ofstream out("18789 save.txt", ios::app);
			out << mx_res_score << '\n';
			for(int i=0;i<8;i++)
			{
				for(int j=0;j<14;j++)
					out << a[i][j];
				out << '\n';
			}
			out.close();
			mx_ans = mx_res_score;

		}
		for(int i=0;i<14;i++)
			a[del_pos][i] = 0;
		del_pos++;
		del_pos %= 8;
	}


	//	if(mx_res_score<res_score)
	//	{
	//		mx_res_score = res_score;
	//		cout << "cnt : " << tr-cnt << " " << res_dna_point << " " << res_score << '\n';
	//		for(int i=0;i<8;i++)
	//		{
	//			for(int j=0;j<14;j++)
	//				cout << a[i][j];
	//			cout << '\n';
	//			break;
	//		}
	//	}
	//}

	//for(int i=0;i<8;i++)
	//cout << s.substr(i*14, 14) << endl;

	return 0;
}
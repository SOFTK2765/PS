#include <bits/stdc++.h>

using namespace std;

int a[11], sel[11];
pair<int, int> nupos[5];
bool check[5][21];
int scr[5][21] = {{0, 2, 4, 6, 8, 10, 12, 14, 16, 18, 20, 22, 24, 26, 28, 30, 32, 34, 36, 38, 40, }, {10, 13, 16, 19, 25, 30, 35, 40, }, {20, 22, 24, 25, 30, 35, 40, }, {30, 28, 27, 26, 25, 30, 35, 40, }};
map<pair<int, int>, pair<int, int>> mp;
bool fcheck[5];
int mx;
int ttt[] = {0, 0, 0, 1, 1, 1, 2, 2, 2, 3};

void f(int pos)
{
	if(pos==10)
	{
		bool tmpflag = false;
		for(int i=0;i<10;i++)
			if(sel[i]!=ttt[i]) tmpflag = true;
		for(int i=0;i<4;i++)
			nupos[i] = {0, 0};
		memset(check, 0, sizeof(check));
		memset(fcheck, 0, sizeof(fcheck));
		int resscr = 0;
		for(int i=0;i<10;i++)
		{
			if(fcheck[sel[i]]) return;
			check[nupos[sel[i]].first][nupos[sel[i]].second] = false;
			nupos[sel[i]].second += a[i];
			nupos[sel[i]] = mp[nupos[sel[i]]];
			if((nupos[sel[i]].first==0 && nupos[sel[i]].second>20) || (nupos[sel[i]].first==1 && nupos[sel[i]].second>7) || (nupos[sel[i]].first==2 && nupos[sel[i]].second>6) || (nupos[sel[i]].first==3 && nupos[sel[i]].second>7))
			{
				fcheck[sel[i]] = true;
				continue;
			}
			resscr += scr[nupos[sel[i]].first][nupos[sel[i]].second];
			if(check[nupos[sel[i]].first][nupos[sel[i]].second]) return;
			check[nupos[sel[i]].first][nupos[sel[i]].second] = true;
		}
		mx = max(mx, resscr);
		return;
	}
	for(int i=0;i<4;i++)
	{
		sel[pos] = i;
		f(pos+1);
	}
}

int main()
{
	for(int i=1;i<=20;i++)
		mp[{0, i}] = {0, i};
	mp[{0, 5}] = {1, 0};
	mp[{0, 10}] = {2, 0};
	mp[{0, 15}] = {3, 0};
	for(int i=1;i<=3;i++)
		for(int j=0;j<3;j++)
			mp[{i, j}] = {i, j};
	for(int i=3;i<=6;i++)
		mp[{1, i}] = {1, i};
	mp[{1, 7}] = {0, 20};
	mp[{2, 3}] = {1, 4};
	mp[{2, 4}] = {1, 5};
	mp[{2, 5}] = {1, 6};
	mp[{2, 6}] = {0, 20};
	mp[{3, 3}] = {3, 3};
	mp[{3, 4}] = {1, 4};
	mp[{3, 5}] = {1, 5};
	mp[{3, 6}] = {1, 6};
	mp[{3, 7}] = {0, 20};
	for(int i=0;i<10;i++)
		scanf(" %d", &a[i]);
	f(0);
	printf("%d", mx);

	return 0;
}
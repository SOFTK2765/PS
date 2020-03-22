#include <bits/stdc++.h>

using namespace std;

const int dx[] = {-1, 0, 1, -1, 1, -1, 0, 1};
const int dy[] = {-1, -1, -1, 0, 0, 1, 1, 1};

char dna[1000][8][14];
char select[100][8][14];
int score[1000], to_n[1000];

string ns;
int l;
bool flag;

void dfs(int dna_number, int x, int y, int pos)
{
	if(pos==l)
	{
		flag = true;
		score[dna_number] += (int)pow(10, l-1);
		return;
	}
	for(int i=0;i<8;i++)
	{
		int nx = x+dx[i], ny = y+dy[i];
		if(nx<0 || nx>=14 || ny<0 || ny>=14 || ns[pos]!=dna[dna_number][ny][nx]) continue;
		dfs(dna_number, nx, ny, pos+1);
		if(flag) return;
	}
}

int main()
{
	int cnt = 3;
	//1. Initialize
	srand((unsigned int)time(NULL));
	for(int i=0;i<1000;i++)
		for(int j=0;j<8;j++)
			for(int k=0;k<14;k++)
			{
				char rchar = '0'+rand()%10;
				dna[i][j][k] = rchar;
			}
	while(cnt--)
	{

		//2. Selection
		//2-1. scoring
		memset(score, 0, sizeof(score));
		for(int dna_number=0;dna_number<1000;dna_number++)
		{
			bool to_n_flag = false;
			for(int n=1;n<=9999;n++)
			{
				ns = to_string(n);
				l = ns.length();
				flag = false; // false : not found, true : found
				for(int i=0;i<8;i++)
				{
					for(int j=0;j<14;j++)
						if(dna[dna_number][i][j]==ns[0])
						{
							dfs(dna_number, j, i, 1);
							if(flag) break;
						}
					if(flag) break;
				}
				if(!to_n_flag) to_n[dna_number] = n-1;
				if(flag) score[dna_number] = n;
				else to_n_flag = true;
			}
		}

		//2-2. select by score ranking
		vector<pair<int, int>> score_ranking;
		for(int dna_number=0;dna_number<1000;dna_number++)
			score_ranking.push_back({score[dna_number], dna_number});
		sort(score_ranking.begin(), score_ranking.end());
		for(int ranking=0;ranking<100;ranking++) // select top 100
		{
			int now_dna_number = score_ranking[ranking].second;
			for(int i=0;i<8;i++)
				for(int j=0;j<14;j++)
					select[ranking][i][j] = dna[now_dna_number][i][j];
		}

		//Print of Best Case
		ofstream out("test-gene.dat", ios::app);
		int best_dna_number = score_ranking[0].second;
		out << to_n[best_dna_number] << '\n';
		for(int i=0;i<8;i++)
		{
			for(int j=0;j<14;j++)
				out << dna[best_dna_number][i][j];
			out << '\n';
		}
		out.close();

		//3. Crossover and Replace
		for(int new_dna_number=0;new_dna_number<1000;new_dna_number++)
		{
			int dna1 = rand()%100, dna2 = rand()%100;
			for(int i=0;i<8;i++)
				for(int j=0;j<14;j++)
					dna[new_dna_number][i][j] = (rand()%2)==0?select[dna1][i][j]:select[dna2][i][j];
		}

		//4. Mutation
		for(int mutation_cnt=0;mutation_cnt<10;mutation_cnt++)
		{
			int target_dna_number = rand()%1000, target_dna_xpos = rand()%14, target_dna_ypos = rand()%8;
			dna[target_dna_number][target_dna_ypos][target_dna_xpos] = '0'+rand()%10;
		}
	}

	return 0;
}
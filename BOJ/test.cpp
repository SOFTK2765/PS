#include <bits/stdc++.h>

using namespace std;

const int dx[] = {-1, 0, 1, -1, 1, -1, 0, 1};
const int dy[] = {-1, -1, -1, 0, 0, 1, 1, 1};

char dna[8][14];
int score, to_n;

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
        if(nx<0 || nx>=14 || ny<0 || ny>=8 || ns[pos]!=dna[ny][nx]) continue;
        dfs(nx, ny, pos+1);
        if(flag) return;
    }
}

int main()
{
    //1. Initialize
    string a;
    cin >> a;
    for(int i=0;i<8;i++)
    {
        cin >> a;
        for(int j=0;j<14;j++)
            dna[i][j] = a[j];
    }
    //2. Selection
    int mx = 0, mx_si = 0, mx_sj = 0, mx_sk = 0, mx_si_2 = 0, mx_sj_2 = 0, mx_sk_2 = 0;
    for(int si=0;si<8;si++)
        for(int sj=0;sj<14;sj++)
        {
            char save = dna[si][sj];
            for(int sk=0;sk<10;sk++)
            {
                dna[si][sj] = '0'+sk;
                if(dna[si][sj]==save) continue;
                for(int si_2=si;si_2<8;si_2++)
                    for(int sj_2=(si==si_2?sj+1:0);sj_2<14;sj_2++)
                    {
                        char save_2 = dna[si_2][sj_2];
                        for(int sk_2=0;sk_2<10;sk_2++)
                        {
                            dna[si_2][sj_2] = '0'+sk_2;
                            if(dna[si_2][sj_2]==save_2) continue;
                            score = 0;
                            bool to_n_flag = false;
                            to_n = 1000;
                            for(int n=1000;n<=9999;n++)
                            {
                                ns = to_string(n);
                                l = ns.length();
                                flag = false; // false : not found, true : found
                                for(int i=0;i<8;i++)
                                {
                                    for(int j=0;j<14;j++)
                                        if(dna[i][j]==ns[0])
                                        {
                                            dfs(j, i, 1);
                                            if(flag)
                                            {
                                                score++;
                                                break;
                                            }
                                        }
                                    if(flag) break;
                                }
                                if(!to_n_flag && !flag)
                                {
                                    to_n = n-1;
                                    to_n_flag = true;
                                }
                            }
                            if(mx<=score)
                            {
                                mx = score;
                                mx_si = si;
                                mx_sj = sj;
                                mx_sk = sk;
                                mx_si_2 = si_2;
                                mx_sj_2 = sj_2;
                                mx_sk_2 = sk_2;
                            }
                        }
                        dna[si_2][sj_2] = save_2;
                    }
            }
            ofstream out("brute-force.dat", ios::app);
            out << mx << " [" << mx_si << "][" << mx_sj << "] " << mx_sk << " [" << mx_si_2 << "][" << mx_sj_2 << "] " << mx_sk_2 << '\n';
            out.close();
            dna[si][sj] = save;
        }
    // Change to MAX
    dna[mx_si][mx_sj] = '0'+mx_sk;
    dna[mx_si_2][mx_sj_2] = '0'+mx_sk_2;

    // Print of Result
    cout << mx << '\n';
    for(int i=0;i<8;i++)
        for(int j=0;j<14;j++)
            cout << dna[i][j];
    cout << '\n';

    return 0;
}
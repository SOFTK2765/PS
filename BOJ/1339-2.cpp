#include <bits/stdc++.h>

using namespace std;

string s[11];
int l[11];
bool check[27];
bool visit[11];
int res[27];

int main()
{
    int n;
    scanf("%d", &n);
    for(int i=0;i<n;i++)
        cin >> s[i];
    for(int i=0;i<n;i++)
    {
        l[i] = s[i].length();
        for(int j=0;j<l[i];j++)
            check[s[i][j]-'A'] = true;
    }
    vector<int> v, score;
    for(int i=0;i<26;i++)
        if(check[i]) v.push_back(i);
    int size = v.size();
    for(int i=9-size+1;i<10;i++)
        score.push_back(i);
    int mx = 0;
    do
    {
        for(int i=0;i<size;i++)
            res[v[i]] = score[i];
        int sum = 0;
        for(int i=0;i<n;i++)
        {
            int tmp = 0;
            for(int j=0;j<l[i];j++)
            {
                tmp *= 10;
                tmp += res[s[i][j]-'A'];
            }
            sum += tmp;
        }
        mx = max(mx, sum);
    }while(next_permutation(score.begin(), score.end()));
    printf("%d", mx);

    return 0;
}
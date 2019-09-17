#include <bits/stdc++.h>

using namespace std;

int cnt[27][10];



int main()
{
    string a, b, c;
    cin >> a >> b >> c;
    cnt[a[1]-'a'][a[0]-'0']++;
    cnt[b[1]-'a'][b[0]-'0']++;
    cnt[c[1]-'a'][c[0]-'0']++;
    int mx = 0, s;
    for(int i=0;i<26;i++)
        for(int j=0;j<10;j++)
            mx = max(mx, cnt[i][j]);
    if(mx==3)
    {
        printf("%d", 0);
        return 0;
    }
    for(int i=0;i<26;i++)
        for(int j=0;j<8;j++)
            if(cnt[i][j]==1 && cnt[i][j]==cnt[i][j+1] && cnt[i][j+1]==cnt[i][j+2])
            {
                printf("%d", 0);
                return 0;
            }
    if(mx==2)
    {
        printf("%d", 1);
        return 0;
    }
    for(int i=0;i<26;i++)
        for(int j=0;j<8;j++)
            if((cnt[i][j]==1 && cnt[i][j]==cnt[i][j+1]) || (cnt[i][j]==1 && cnt[i][j]==cnt[i][j+2]) || (cnt[i][j+1]==1 && cnt[i][j+1]==cnt[i][j+2]))
            {
                printf("%d", 1);
                return 0;
            }
    printf("%d", 2);

    return 0;
}
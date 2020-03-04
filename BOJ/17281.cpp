#include <bits/stdc++.h>

using namespace std;

char seq[] = "12345678";
int a[51][10];
bool base[4];

int main()
{
    int n;
    scanf("%d", &n);
    for(int i=0;i<n;i++)
        for(int j=0;j<9;j++)
            scanf(" %d", &a[i][j]);
    int mx = 0;
    do
    {
        int pos = 0, score = 0;
        for(int i=0;i<n;i++)
        {
            int ocnt = 0;
            memset(base, 0, sizeof(base));
            while(ocnt<3)
            {
                int tmpbt = pos<3?a[i][seq[pos]-'0']:pos>3?a[i][seq[pos-1]-'0']:a[i][0];
                if(tmpbt==0) ocnt++;
                else
                {
                    base[0] = true;
                    for(int i=3;i>=0;i--)
                        if(base[i])
                        {
                            if(i+tmpbt>=4) score++;
                            else base[i+tmpbt] = true;
                            base[i] = false;
                        }
                }
                if(++pos>8) pos = 0;
            }
        }
        mx = max(mx, score);
    }while(next_permutation(seq, seq+8));
    printf("%d", mx);

    return 0;
}
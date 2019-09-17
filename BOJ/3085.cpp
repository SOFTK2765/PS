#include <bits/stdc++.h>

using namespace std;

char a[51][51];

int main()
{
    int n;
    scanf("%d", &n);
    for(int i=0;i<n;i++)
        scanf(" %s", a[i]);
    int mx = 0;
    for(int i=0;i<n;i++)
        for(int j=0;j<n-1;j++)
        {
            swap(a[i][j], a[i][j+1]);
            char tmp = 0;
            int cnt = 0;           
            for(int r=0;r<n;r++)
                if(a[i][r]!=tmp)
                {
                    mx = max(mx, cnt);
                    cnt = 1;
                    tmp = a[i][r];
                }
                else cnt++;
            mx = max(mx, cnt);
            tmp = cnt = 0;
            for(int c=0;c<n;c++)
                if(a[c][j]!=tmp)
                {
                    mx = max(mx, cnt);
                    cnt = 1;
                    tmp = a[c][j];
                }
                else cnt++;
            mx = max(mx, cnt);
            tmp = cnt = 0;
            for(int c=0;c<n;c++)
                if(a[c][j+1]!=tmp)
                {
                    mx = max(mx, cnt);
                    cnt = 1;
                    tmp = a[c][j+1];
                }
                else cnt++;
            mx = max(mx, cnt);
            swap(a[i][j], a[i][j+1]);
        }
    for(int i=0;i<n-1;i++)
        for(int j=0;j<n;j++)
        {
            swap(a[i][j], a[i+1][j]);
            char tmp = 0;
            int cnt = 0;           
            for(int c=0;c<n;c++)
                if(a[c][j]!=tmp)
                {
                    mx = max(mx, cnt);
                    cnt = 1;
                    tmp = a[c][j];
                }
                else cnt++;
            mx = max(mx, cnt);
            tmp = cnt = 0;
            for(int r=0;r<n;r++)
                if(a[i][r]!=tmp)
                {
                    mx = max(mx, cnt);
                    cnt = 1;
                    tmp = a[i][r];
                }
                else cnt++;
            mx = max(mx, cnt);
            tmp = cnt = 0;
            for(int r=0;r<n;r++)
                if(a[i+1][r]!=tmp)
                {
                    mx = max(mx, cnt);
                    cnt = 1;
                    tmp = a[i+1][r];
                }
                else cnt++;
            mx = max(mx, cnt);
            swap(a[i][j], a[i+1][j]);
        }
    printf("%d", mx);

    return 0;
}
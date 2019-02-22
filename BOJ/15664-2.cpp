#include <bits/stdc++.h>

using namespace std;

int n, m, cnt;
int a[9], res[9];
int save[257][9];
bool check[9];

void f(int pos, int pre)
{
    if(pos==m)
    {
        for(int i=0;i<cnt;i++)
            for(int j=0;j<m;j++)
            {
                if(res[j]!=save[i][j]) break;
                if(j==m-1) return;
            }
        for(int i=0;i<m;i++)
        {
            printf("%d ", res[i]);
            save[cnt][i] = res[i];
        }
        printf("\n");
        cnt++;
        return;
    }
    for(int i=pre+1;i<n;i++)
    {
        if(!check[i])
        {
            check[i] = true;
            res[pos] = a[i];
            f(pos+1, i);
            check[i] = false;
        }
    }
}

int main()
{
    scanf("%d %d", &n, &m);
    for(int i=0;i<n;i++)
        scanf(" %d", &a[i]);
    sort(a, a+n);
    f(0, -1);

    return 0;
}
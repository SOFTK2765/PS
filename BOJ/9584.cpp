#include <bits/stdc++.h>

using namespace std;

char a[10];
char b[1001][10];
bool check[1001];

int main()
{
    int n;
    scanf("%s %d", a, &n);
    int cnt = 0;
    for(int i=0;i<n;i++)
    {
        scanf("%s", b[i]);
        bool flag = false;
        for(int j=0;j<9;j++)
            if(a[j]!='*' && a[j]!=b[i][j])
            {
                flag = true;
                break;
            }
        if(!flag)
        {
            cnt++;
            check[i] = true;
        }
    }
    printf("%d\n", cnt);
    for(int i=0;i<n;i++)
        if(check[i]) printf("%s\n", b[i]);

    return 0;
}
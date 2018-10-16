#include <bits/stdc++.h>

using namespace std;

const int dx = {1, -1, 0, 0};
const int dy = {0, 0, 1, -1};

int a[301][301];

int main()
{
    int n, m;
    scanf("%d %d", &n, &m);
    for(int i=0;i<n;i++)
        for(int j=0;j<m;j++)
            scanf(" %d", &a[i][j]);

    return 0;
}
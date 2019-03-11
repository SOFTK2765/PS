#include <bits/stdc++.h>

using namespace std;

bool check[2001][2001];

int main()
{
    int a, b, c, d, cnt = 0;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    for(int i=b+1000;i<d+1000;i++)
        for(int j=a+1000;j<c+1000;j++)
            if(!check[i][j])
            {
                check[i][j] = true;
                cnt++;
            }
    scanf(" %d %d %d %d", &a, &b, &c, &d);
    for(int i=b+1000;i<d+1000;i++)
        for(int j=a+1000;j<c+1000;j++)
            if(!check[i][j])
            {
                check[i][j] = true;
                cnt++;
            }
    scanf(" %d %d %d %d", &a, &b, &c, &d);
    for(int i=b+1000;i<d+1000;i++)
        for(int j=a+1000;j<c+1000;j++)
            if(check[i][j]) cnt--;
    printf("%d", cnt);

    return 0;
}
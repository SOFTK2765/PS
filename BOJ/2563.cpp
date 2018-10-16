#include <bits/stdc++.h>

using namespace std;

bool check[101][101] = {};

int main()
{
    int t;
    scanf("%d", &t);
    while(t--)
    {
        int a, b;
        scanf(" %d %d", &a, &b);
        for(int i=b;i<b+10;i++)
            for(int j=a;j<a+10;j++)
                check[i][j] = true;
    }
    int sum = 0;
    for(int i=0;i<100;i++)
        for(int j=0;j<100;j++)
            if(check[i][j]==true) sum++;
    printf("%d", sum);

    return 0;
}
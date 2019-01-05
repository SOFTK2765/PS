#include <bits/stdc++.h>

using namespace std;

bool check[10001];

int main()
{
    int n;
    scanf("%d", &n);
    for(int i=0;i<n;i++)
    {
        int a, b;
        scanf(" %d %d", &a, &b);
        for(int j=a;j<b;j++)
            check[j] = true;
    }
    int cnt = 0;
    for(int i=0;i<10001;i++)
        if(check[i]) cnt++;
    printf("%d", cnt);

    return 0;
}
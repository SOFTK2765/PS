#include <bits/stdc++.h>

using namespace std;

bool check[101];

int main()
{
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    for(int i=a;i<b;i++)
        check[i] = true;
    for(int i=c;i<d;i++)
        check[i] = true;
    int cnt = 0;
    for(int i=0;i<=100;i++)
        if(check[i]) cnt++;
    printf("%d", cnt);

    return 0;
}
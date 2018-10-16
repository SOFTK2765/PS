#include <bits/stdc++.h>

using namespace std;

bool check[100001];

int main()
{
    int n;
    scanf("%d", &n);
    int cnt = 0, max = 0;
    for(int i=0;i<2*n;i++)
    {
        int tmp;
        scanf("%d", &tmp);
        if(check[tmp]==false) cnt++;
        else cnt--;
        if(max<cnt) max = cnt;
        check[tmp] = check[tmp]==true?false:true;
    }
    printf("%d", max);

    return 0;
}
#include <bits/stdc++.h>

using namespace std;

int d[101];

int main()
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    for(int i=0;i<3;i++)
    {
        int t1, t2;
        scanf(" %d %d", &t1, &t2);
        for(int i=t1;i<t2;i++)
            d[i]++;
    }
    int sum = 0;
    for(int i=0;i<101;i++)
        sum += ((d[i]==1?a:(d[i]==2?b:c))*d[i]);
    printf("%d", sum);

    return 0;
}
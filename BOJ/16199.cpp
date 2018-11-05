#include <bits/stdc++.h>

using namespace std;

int main()
{
    int y1, m1, d1, y2, m2, d2;
    scanf("%d %d %d %d %d %d", &y1, &m1, &d1, &y2, &m2, &d2);
    printf("%d\n%d\n%d", m2-m1>0?y2-y1:m2-m1<0?y2-y1-1:d2-d1>=0?y2-y1:y2-y1-1, y2-y1+1, y2-y1);

    return 0;
}
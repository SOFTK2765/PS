#include <bits/stdc++.h>

using namespace std;

int main()
{
    for(int i=0;i<3;i++)
    {
        int h1, m1, s1, h2, m2, s2;
        scanf(" %d %d %d %d %d %d", &h1, &m1, &s1, &h2, &m2, &s2);
        int tmp = (h2*3600+m2*60+s2)-(h1*3600+m1*60+s1);
        printf("%d ", tmp/3600);
        tmp %= 3600;
        printf("%d %d\n", tmp/60, tmp%60);
    }

    return 0;
}
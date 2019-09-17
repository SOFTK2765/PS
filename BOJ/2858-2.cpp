#include <bits/stdc++.h>

using namespace std;

int main()
{
    int r, b;
    scanf("%d %d", &r, &b);
    for(int i=1;i<(r-4)/2;i++)
        if(i*(r-4-i*2)/2==b)
        {
            printf("%d %d", (r-4-i*2)/2+2, i+2);
            break;
        }

    return 0;
}
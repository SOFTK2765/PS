#include <bits/stdc++.h>

using namespace std;

int main()
{
    int w, h, x, y, p;
    scanf("%d %d %d %d %d", &w, &h, &x, &y, &p);
    int cnt = 0;
    for(int i=0;i<p;i++)
    {
        int tx, ty;
        scanf(" %d %d", &tx, &ty);
        if((x<=tx && tx<=x+w && y<=ty && ty<=y+h) || (x-tx)*(x-tx)+(y+h/2.0-ty)*(y+h/2.0-ty)<=h*h/4.0 || (x+w-tx)*(x+w-tx)+(y+h/2.0-ty)*(y+h/2.0-ty)<=h*h/4.0) cnt++;
    }
    printf("%d", cnt);

    return 0;
}
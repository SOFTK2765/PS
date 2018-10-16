#include <bits/stdc++.h>

using namespace std;

int main()
{
    while(1)
    {
        int h, u, d, f;
        scanf(" %d %d %d %d", &h, &u, &d, &f);
        if(h==0) break;
        int cnt = 0;
        double pos = 0, tu = u, p = u*(1.0*f/100);
        bool flag = false;
        while(pos>=0)
        {
            cnt++;
            pos += tu;
            if(pos>h)
            {
                flag = true;
                break;
            }
            pos -= d;
            tu -= p;
            if(tu<0) tu = 0;
        }
        if(flag) printf("success on day %d\n", cnt);
        else printf("failure on day %d\n", cnt);
    }

    return 0;
}
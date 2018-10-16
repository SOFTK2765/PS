#include <bits/stdc++.h>

using namespace std;

const int mp[][4] = {{0, 0, 0, 0}, {1, 4, 3, 2}, {1, 2, 3, 4}, {1, 2, 3, 4}, {3, 2, 1, 4}};

int main()
{
    int n, m;
    scanf("%d %d", &n, &m);
    int prepxy = 2, xmn = 1, xmx = n, ymn = 1, ymx = n;
    while(n/=2)
    {
        int pxy = m/(n*n);
        m = (m-1)%(n*n)+1;
        printf("%d %d\n", pxy, m);
        prepxy = mp[prepxy][pxy];
        printf("%d\n", prepxy);
        if(prepxy==1)
        {
            xmx = (xmn+xmx)/2;
            ymx = (ymn+ymx)/2;
        }
        else if(prepxy==2)
        {
            xmx = (xmn+xmx)/2;
            ymn = (ymn+ymx)/2+1;
        }
        else if(prepxy==3)
        {
            xmn = (xmn+xmx)/2+1;
            ymn = (ymn+ymx)/2+1;
        }
        else if(prepxy==4)
        {
            xmn = (xmn+xmx)/2+1;
            ymx = (ymn+ymx)/2;
        }
    }
    printf("%d %d", xmn, ymn);

    return 0;
}
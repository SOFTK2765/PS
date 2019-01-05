#include <bits/stdc++.h>

using namespace std;

int a[1001];

int main()
{
    int n, k;
    scanf("%d %d", &n, &k);
    int pos = 0;
    for(int i=1;i<=k;i++)
    {
        int tmp = n*i;
        if(tmp<10) a[pos++] = tmp;
        else
        {
            int s = 0;
            while(tmp)
            {
                s *= 10;
                s += tmp%10;
                tmp /= 10;
            }
            a[pos++] = s;
        }
    }
    sort(a, a+pos);
    printf("%d", a[pos-1]);

    return 0;
}
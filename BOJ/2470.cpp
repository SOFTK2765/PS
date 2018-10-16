#include <bits/stdc++.h>

using namespace std;

int a[100001];

int minf(int a, int b){return a<b?a:b;}

int main()
{
    int n;
    scanf("%d", &n);
    for(int i=0;i<n;i++)
        scanf(" %d", &a[i]);
    sort(a, a+n);
    int posa, posb, sposa, sposb;
    posa = posb = sposa = sposb = n - 1;
    for(int i=0;i<n;i++)
        if(a[i] >= 0)
        {
            posa = i;
            posb = i;
            sposa = i;
            sposb = i;
            break;
        }
    int min = 2000000001;
    if(posa-1 >= 0) min = minf(min, abs(a[posa-1]+a[posb]));
    if(posb+1 < n)
    {
        min = minf(min, abs(a[posa]+a[posb+1]));
        if(min == abs(a[posa]+a[posb+1]))
        {
            posb++;
            sposb = posb;
        }
    }
    else
    {
        if(min == abs(a[posa-1]+a[posb]))
        {
            posa--;
            sposa = posa;
        }
   } 
    while(1)
    {
        if(posa < 0 || posb >= n) break;
        int x, y;
        if(posa-1 >= 0) x = abs(a[posa-1]+a[posb]);
        else x = abs(a[posa]+a[posb]);
        if(posb+1 < n) y = abs(a[posa]+a[posb+1]);
        else y = abs(a[posa]+a[posb]);
        if(posa-1 < 0 && posb+1 >= n) break;
        int n;
        if(x<y)
        {
            n = x;
            posa--;
        }
        else
        {
            n = y;
            posb++;
        }
        if(n!=0)
        {
            if(n<min)
            {
                min = n;
                sposa = posa;
                sposb = posb;
            }
        }
        else
        {
            printf("%d %d", a[posa], a[posb]);
            return 0;
        }
    }
    printf("%d %d", a[sposa], a[sposb]);

    return 0;
}
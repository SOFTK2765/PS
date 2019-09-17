#include <bits/stdc++.h>

using namespace std;

int a[200001], b[200001];

int main()
{
    int an, bn;
    scanf("%d %d", &an, &bn);
    for(int i=0;i<an;i++)
        scanf(" %d", &a[i]);
    for(int i=0;i<bn;i++)
        scanf(" %d", &b[i]);
    sort(a, a+an);
    sort(b, b+bn);
    int posa = 0, posb = 0, cnt = 0;
    while(posa<an && posb<bn)
        if(a[posa]==b[posb])
        {
            posa++;
            posb++;
        } 
        else
        {
            if(a[posa]<b[posb]) posa++;
            else posb++;
            cnt++;
        }
    while(posa++<an) cnt++;
    while(posb++<bn) cnt++;
    printf("%d", cnt);

    return 0;
}
#include <bits/stdc++.h>

using namespace std;

int a[101];

int main()
{
    int p, n;
    scanf("%d %d", &p, &n);
    for(int i=0;i<n;i++)
    {
        int pos;
        char w;
        scanf(" %d %c", &pos, &w);
        if(w == 'R') for(int j=pos+1;j<=100;j++) a[j]++;
        else for(int j=pos-1;j>=1;j--) a[j]++;
    }
    int cnt0 = 0, cnt1 = 0, cnt2 = 0;
    for(int i=1;i<=100;i++)
    {
        if(a[i]%3 == 0) cnt0++;
        else if(a[i]%3 == 1) cnt1++;
        else cnt2++;
    }
    printf("%.2f\n%.2f\n%.2f", 1.0*p*cnt0/100, 1.0*p*cnt1/100, 1.0*p*cnt2/100);

    return 0;
}
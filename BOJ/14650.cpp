#include <bits/stdc++.h>

using namespace std;

int n, cnt = 0, cnt1 = 0, cnt2 = 0;

void f(int pos)
{
    if(pos == n)
    {
        int max = cnt1>cnt2?cnt1:cnt2;
        int min = cnt1<cnt2?cnt1:cnt2;
        if((max-min)%3 == 0) cnt++;
        return;
    }
    cnt1++;
    f(pos+1);
    cnt1--;
    cnt2++;
    f(pos+1);
    cnt2--;
    if(pos != n-1) f(pos+1);
} 

int main()
{
    scanf("%d", &n);
    f(0);
    printf("%d", cnt);

    return 0;
}
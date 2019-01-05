#include <bits/stdc++.h>

using namespace std;

int cnt[10];

int main()
{
    int tmp;
    while(~scanf("%1d", &tmp)) cnt[tmp]++;
    if(cnt[3]+cnt[4]+cnt[5]+cnt[6]+cnt[7]+cnt[9]==0)
    {
        if(cnt[0]==cnt[1] && cnt[0]==cnt[2] && cnt[0]==cnt[8]) printf("8");
        else if(cnt[0]>0 && cnt[1]>0 && cnt[2]>0 && cnt[8]>0) printf("2");
        else printf("1");
    }
    else printf("0");

    return 0;
}
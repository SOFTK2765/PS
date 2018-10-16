#include <bits/stdc++.h>

using namespace std;

int cnt[10001], s[10001];

int main()
{
    while(1)
    {
        for(int i=0;i<10001;i++)
        {
            cnt[i] = 0;
            s[i] = 0;
        }
        int n, m;
        scanf(" %d %d", &n, &m);
        if(n==0 && m==0) break;
        for(int i=0;i<n;i++)
            for(int j=0;j<m;j++)
            {
                int tmp;
                scanf(" %d", &tmp);
                cnt[tmp]++;
            }
        int pos = 0;
        for(int i=0;i<10001;i++)
            if(cnt[i]) s[pos++] = cnt[i];
        sort(s, s+pos);
        int sec = 0;
        for(int i=pos-2;i>=0;i--)
            if(s[i]!=s[pos-1])
            {
                sec = s[i];
                break;
            }
        for(int i=0;i<10001;i++)
            if(cnt[i]==sec) printf("%d ", i);
        printf("\n");
    }

    return 0;
}
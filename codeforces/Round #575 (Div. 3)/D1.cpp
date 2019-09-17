#include <bits/stdc++.h>

using namespace std;

int a[2001];

int main()
{
    int q;
    scanf("%d", &q);
    while(q--)
    {
        int n, k;
        scanf(" %d %d", &n, &k);
        string s;
        cin >> s;
        for(int i=0;i<n;i++)
            if(s[i]=='R') a[i] = 0;
            else if(s[i]=='G') a[i] = 1;
            else if(s[i]=='B') a[i] = 2;
        int mx = 0;
        for(int i=0;i<n-k+1;i++)
        {
            int cnt1 = 0, cnt2 = 0, cnt3 = 0;
            for(int j=0;j<k;j++)
            {
                if(a[i+j]==j%3) cnt1++;
                else if(a[i+j]==(j+1)%3) cnt2++;
                else if(a[i+j]==(j+2)%3) cnt3++;
            }
            mx = max(mx, max(cnt1, max(cnt2, cnt3)));
        }
        printf("%d\n", k-mx);
    }

    return 0;
}
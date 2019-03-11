#include <bits/stdc++.h>

using namespace std;

const string s[2] = {"WBWBWBWB", "BWBWBWBW"};

string a[51];

int main()
{
    int n, m;
    scanf("%d %d", &n, &m);
    for(int i=0;i<n;i++)
        cin >> a[i];
    int mn = 987654321;
    for(int i=0;i<n-7;i++)
        for(int j=0;j<m-7;j++)
        {
            int cnt1 = 0, cnt2 = 0;
            for(int k=0;k<8;k++)
                for(int l=0;l<8;l++)
                    if(a[k+i][l+j]!=s[k%2][l]) cnt1++;
                    else cnt2++;
            mn = min(mn, min(cnt1, cnt2));
        }
    printf("%d", mn);

    return 0;
}
#include <bits/stdc++.h>

using namespace std;

char a[101];
char ctmp[3], mxa[3];

int main()
{
    int n;
    scanf("%d", &n);
    scanf("%s", a);
    int mx = 0;
    for(int i=0;i<n-1;i++)
    {
        ctmp[0] = a[i];
        ctmp[1] = a[i+1];
        int cnt = 0;
        for(int j=0;j<n-1;j++)
            if(ctmp[0]==a[j] && ctmp[1]==a[j+1]) cnt++;
        if(mx<cnt)
        {
            mx = cnt;
            mxa[0] = ctmp[0];
            mxa[1] = ctmp[1];
        }
    }
    printf("%s", mxa);

    return 0;
}
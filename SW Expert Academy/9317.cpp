#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    scanf("%d", &t);
    for(int tc=1;tc<=t;tc++)
    {
        int n;
        scanf(" %d", &n);
        string s1, s2;
        cin >> s1 >> s2;
        int cnt = 0;
        for(int i=0;i<n;i++)
            if(s1[i]==s2[i]) cnt++;
        printf("#%d %d\n", tc, cnt);
    }

    return 0;
}
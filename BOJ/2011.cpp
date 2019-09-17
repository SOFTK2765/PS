#include <bits/stdc++.h>

using namespace std;

int dp[5001];

int main()
{
    string s;
    cin >> s;
    int l = s.length();
    dp[0] = dp[1] = 1;
    if(s[0]=='0')
    {
        printf("0");
        return 0;
    }
    for(int i=1;i<l;i++)
    {
        int tmp = atoi(s.substr(i-1, 2).c_str());
        if(10<tmp && tmp<=26 && tmp!=20)
        {
            if(i!=l-1 && (tmp%10==1 || tmp%10==2) && s[i+1]=='0') dp[i+1] = dp[i];
            else dp[i+1] = (dp[i]+dp[i-1])%1000000;
        }
        else if(tmp!=10 && tmp!=20 && tmp%10==0)
        {
            printf("%d", 0);
            return 0;
        }
        else dp[i+1] = dp[i];
    }
    printf("%d", dp[l]);

    return 0;
}
#include <bits/stdc++.h>

using namespace std;

int cnt[11];

int main()
{
    string n;
    cin >> n;
    int l = n.length(), sum = 0;
    for(int i=0;i<l;i++)
    {
        sum += (n[i]-'0');
        cnt[n[i]-'0']++;
    }
    if(sum%3!=0 || cnt[0]==0) printf("%d", -1);
    else for(int i=9;i>=0;i--) while(cnt[i]--) printf("%d", i);

    return 0;
}
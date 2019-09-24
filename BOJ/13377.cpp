#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    scanf("%d", &n);
    map<string, int> mp;
    string tmp = "abcdefghi";
    int cnt = 0;
    do
    {
        cnt++;
        mp[tmp] = cnt;
    }while(next_permutation(tmp.begin(), tmp.end()));
    for(int i=0;i<n;i++)
    {
        string s;
        cin >> s;
        printf("%d\n", mp[s]);
    }

    return 0;
}
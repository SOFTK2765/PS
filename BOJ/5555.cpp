#include <bits/stdc++.h>

using namespace std;

int main()
{
    string a;
    cin >> a;
    int al = a.length(), n;
    scanf("%d", &n);
    int cnt = 0;
    for(int i=0;i<n;i++)
    {
        string s;
        cin >> s;
        s += s;
        int l = s.length();
        for(int j=0;j<l-al+1;j++)
            if(a==s.substr(j, al))
            {
                cnt++;
                break;
            }
    }
    printf("%d", cnt);

    return 0;
}
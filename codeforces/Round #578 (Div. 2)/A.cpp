#include <bits/stdc++.h>

using namespace std;

bool check[11];

int main()
{
    int n;
    scanf("%d", &n);
    string s;
    cin >> s;
    for(int i=0;i<n;i++)
    {
        if(s[i]=='L')
        {
            for(int j=0;j<10;j++)
                if(!check[j])
                {
                    check[j] = true;
                    break;
                }
        }
        else if(s[i]=='R')
        {
            for(int j=9;j>=0;j--)
                if(!check[j])
                {
                    check[j] = true;
                    break;
                }
        }
        else check[s[i]-'0'] = false;
    }
    for(int i=0;i<10;i++)
        printf("%d", check[i]);

    return 0;
}